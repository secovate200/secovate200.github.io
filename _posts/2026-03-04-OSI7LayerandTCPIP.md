---
title: "네트워크 - OSI 7 Layer 그리고  TCP/IP 구조"
date: 2026-03-02-17:00:00 +0900
categories: [ Network]
author: "secovate200"
math : true
tags: [TCP/IP, OSI 7Layer]

---
### OSI 7 Layer
-  통신 시스템을 기능별로 7단계로 나눈 추상적 모델이다.
- 복잡한 네트워크 통신 과정을 단계별로 분리하여 설계,구현,디버깅,보안분석들을 용이하게 한다.

| 계층 | 계층명 (한글) | 주요 기능 | 예시 프로토콜 |
| :--- | :--- | :--- | :--- |
| 7 | 응용 계층 | 사용자에게 직접 서비스 제공 | HTTP, FTP, DNS, SMTP |
| 6 | 표현 계층 | 데이터 형식 변환, 암호화, 압축 등 | SSL, TLS, MPEG, JPEG |
| 5 | 세션 계층 | 통신 세션 관리 (연결, 유지, 종료) | NetBIOS, RPC |
| 4 | 전송 계층 | 신뢰성 있는 데이터 전송, 흐름 제어, 오류 제어 | TCP, UDP |
| 3 | 네트워크 계층 | 논리 주소(IP)를 통한 라우팅 | IP, ICMP, ARP, RIP, OSPF |
| 2 | 데이터 링크 계층 | 물리적 주소(MAC)를 이용한 프레임 전송 | Ethernet, PPP, VLAN |
| 1 | 물리 계층 | 전기/광 신호로 실제 데이터 전송 | RS-232, 전기 신호, 광섬유 |

### TCP/IP 4계층 구조 
| TCP/IP 계층 | 대응하는 OSI 계층 | 주요 프로토콜 |
| :--- | :--- | :--- |
| 4계층 (응용) | OSI 5~7계층 | HTTP, FTP, SMTP, DNS 등 |
| 3계층 (전송) | OSI 4계층 | TCP, UDP |
| 2계층 (인터넷) | OSI 3계층 | IP, ICMP, ARP |
| 1계층 (네트워크 액세스) | OSI 1~2계층 | Ethernet, MAC, PPP |