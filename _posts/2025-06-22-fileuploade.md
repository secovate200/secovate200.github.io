---
title: "[웹 해킹] 4.파일 업로드 기법 정리"
date: 2025-06-22 12:05 +0900
categories: ["Hacking", "File Upload"]
tags: [web, Backend]
mermaid: true
---



파일 업로드는 웹 애플리케이션에서 자주 사용하는 기능 중 하나이지만, 잘못 구현된 경우 치명적인 보안 취약점을 야기할 수 있습니다. 이 문서에서는 다양한 파일 업로드 기법과 우회 방법, 그리고 공격 및 방어 관점에서의 기술들을 정리합니다.

---

## 1. 기본 파일 업로드 구조

웹 서버에서의 파일 업로드는 보통 다음과 같은 흐름을 가집니다:

1. 클라이언트가 `multipart/form-data` 형식으로 파일을 전송
2. 서버는 파일 확장자, MIME 타입 등 검증
3. 서버에 저장 (예: `/uploads/filename.jpg`)
4. 경로를 데이터베이스에 저장하거나, 바로 접근 가능하게 구성

---

## 2. 파일 업로드 취약점 공격 기법

### 2.1 확장자 우회

* `.php.png`, `.php;.jpg`, `file.pHp`
* Windows 계열에서는 `file.php::$DATA` 형태도 우회로 사용 가능

### 2.2 MIME 타입 우회

* Content-Type: `image/jpeg` 으로 위장
* 일부 서버는 Content-Type만 확인하고 확장자 검증 누락

### 2.3 이중 확장자

* `file.php.jpg`
* 서버가 마지막 확장자만 체크하면 PHP 코드 실행 가능

### 2.4 웹쉘 업로드

```php
<?php system($_GET['cmd']); ?>
```

### 2.5 `.htaccess` 우회 (Apache 환경)

```apacheconf
SetHandler application/x-httpd-php
AddType application/x-httpd-php .jpg
```

* `.jpg`로 업로드해도 PHP로 인식되도록 변경

### 2.6 이미지 삽입 웹쉘

* 정상 이미지 파일에 PHP 코드를 삽입 (EXIF, APP0 섹션 등)
* 일부 라이브러리는 이를 걸러내지 못함

### 2.7 중간자 공격을 통한 필터 우회

* 업로드 도중 전송 조작 (BurpSuite 등으로 Content-Disposition, filename 필드 변조)

### 2.8 경로 조작

* 파일명을 `../../shell.php`로 지정하여 디렉토리 탈출 시도

---

## 3. 서버 설정 우회 기법

### 3.1 Nginx + PHP-FPM 환경

* 확장자 관계없이 실행 가능하도록 설정되어 있으면 `.jpg`도 실행됨
* 예: `location ~ \.php$ {}` 대신 `location / {}` 아래 FastCGI 설정 시

### 3.2 IIS 서버

* `file.asp;.jpg` 형태 허용 가능
* `::$DATA` 스트림 데이터 트릭으로 실행 우회 가능

---

## 4. 방어 방법

* **파일 확장자 화이트리스트 적용** (`jpg`, `png`, `pdf` 등만 허용)
* **MIME 타입 검증** (Content-Type + 파일 magic number 동시 확인)
* **파일 내용 검사** (서버 측에서 헤더 또는 바이너리 확인)
* **업로드 디렉토리 실행 금지** (`uploads/`에 `.htaccess: php_flag engine off` 등)
* **파일명 랜덤화** (사용자 업로드 파일명을 그대로 사용하지 않기)
* **서버 측 이미지 리사이징 후 저장** (이미지 업로드의 경우 이미지 라이브러리로 재처리)
* **디렉토리 경로 조작 방지** (경로 traversal 검사)

---

## 5. 실전 우회 예시 (BurpSuite 활용)

* 파일명을 `shell.php.jpg`로 설정하고 Content-Type을 `image/jpeg`로 변경
* 파일 본문은 실제 PHP 코드 포함
* 서버에서 확장자만 확인한다면 우회 성공

---

## 6. 요약 정리

| 공격 기법          | 설명                                     |
| -------------- | -------------------------------------- |
| 이중 확장자         | `file.php.jpg`, `file.jpg.php`         |
| MIME 위조        | `Content-Type: image/jpeg` + PHP 코드 포함 |
| 경로 우회          | `../../../../var/www/html/shell.php`   |
| 이미지 웹쉘         | JPEG 내부에 PHP 삽입                        |
| `.htaccess` 트릭 | Apache 환경에서 MIME 해석 우회                 |

---

**참고 도구**

* Burp Suite
* ExifTool
* Webshell Collection

추가로 특정 언어/프레임워크 기반의 파일 업로드 취약점 대응이 필요하시면 요청해 주세요.
