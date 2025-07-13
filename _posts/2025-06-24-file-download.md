---
title: "[웹 해킹] 5.파일 다운로드 기법 정리"
date: 2025-06-24 12:05 +0900
categories: ["Hacking", "File Download"]
tags: [web, Backend]
mermaid: true
---


파일 다운로드 기능은 사용자가 서버에 저장된 특정 파일을 받아볼 수 있도록 제공하는 기능입니다. 하지만 잘못된 구현은 심각한 보안 취약점으로 이어질 수 있습니다. 이 문서에서는 파일 다운로드 구조, 공격 기법, 우회 및 방어 전략을 정리합니다.

---

## 1. 파일 다운로드 기능 개요

일반적인 파일 다운로드 구조:

```python
# 예시 (Flask)
@app.route("/download")
def download():
    filename = request.args.get("file")
    return send_file("/var/www/files/" + filename)
```

사용자 입력값으로부터 파일명을 받아 서버에서 파일을 읽어 전송함

---

## 2. 주요 취약점: 디렉토리 트래버설 (Directory Traversal)

### 2.1 공격 개념

* 사용자 입력값에 `../` 등을 포함해 상위 디렉토리 접근 시도
* 서버가 이를 필터링하지 않으면 시스템 내 민감한 파일 다운로드 가능

### 2.2 공격 예시

* `/download?file=../../../../etc/passwd`
* `/download?file=..%2f..%2f..%2fetc%2fpasswd` (URL 인코딩)

### 2.3 동작 예시

```python
@app.route("/download")
def download():
    filename = request.args.get("file")
    return send_file("/var/www/files/" + filename)
```

→ `filename = ../../etc/passwd` 입력 시 `/etc/passwd` 다운로드됨

---

## 3. 우회 기법

| 우회 방법       | 설명                                        |
| ----------- | ----------------------------------------- |
| URL 인코딩     | `../` → `%2e%2e%2f`, `%2e./`, `%2e%2e/` 등 |
| 이중 인코딩      | `%252e%252e%252f` → 디코딩 2회 필요             |
| 유니코드 우회     | `..\u2215..\u2215etc\u2215passwd`         |
| Null 바이트 삽입 | `file.txt%00.png` (구형 PHP 등)              |
| 절대경로 삽입     | `/etc/passwd` 직접 입력                       |

---

## 4. 다른 공격 기법

### 4.1 내부 파일 열람

* `.git/config`, `.env`, `config.php`, `web.config`, `db.sqlite` 등

### 4.2 소스코드 노출

* 다운로드 기능이 `.php` 파일 등을 허용하면 실행되지 않고 소스가 그대로 노출될 수 있음

### 4.3 SSRF와 조합

* 내부 서버 파일 다운로드 → SSRF 활용으로 내부 경로 유추/탐색 가능

---

## 5. 방어 방법

* **경로 제한**: 다운로드 가능한 디렉토리 내 파일만 지정 (화이트리스트 방식)
* **파일명 검증**: `../`, 절대경로 문자 등 포함 여부 차단
* **정규식 필터링**: 허용된 형식만 다운로드 허용 (`^[\w\-\.]+$` 등)
* **파일 식별자 사용**: 파일명을 직접 전달하지 않고 DB ID 등을 통해 매핑
* **심볼릭 링크 및 링크 우회 탐지 방지**
* **예외 처리**: 존재하지 않는 파일에 대한 오류 처리를 명확히

예시 (안전한 방식):

```python
@app.route("/download")
def download():
    file_map = {"report": "report_2024.pdf", "manual": "user_manual.pdf"}
    key = request.args.get("file")
    if key in file_map:
        return send_file("/var/www/files/" + file_map[key])
    abort(404)
```

---

## 6. 요약 정리

| 항목     | 내용                                 |
| ------ | ---------------------------------- |
| 주요 취약점 | 디렉토리 트래버설, 경로 우회, 내부 파일 노출         |
| 우회 방식  | URL 인코딩, 이중 인코딩, 유니코드, null byte 등 |
| 방어 방법  | 화이트리스트, 정규식 검사, 식별자 매핑, 경로 제한      |
| 추가 공격  | 소스 노출, 민감 정보 접근, SSRF 연계 공격        |

---

실전 테스트 시에는 Burp Suite나 curl을 활용해 경로 우회, 인코딩 우회 등을 반복적으로 시도하면서 서버의 응답을 확인해야 합니다. 프레임워크별 대응 기법이 필요하다면 추가로 제공 가능합니다.
