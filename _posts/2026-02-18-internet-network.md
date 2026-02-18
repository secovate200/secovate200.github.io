---
title: "네트워크 - 인터넷과 네트워크 개념"
date: 2026-02-18-12:00:00 +0900
categories: [Network]
author: secovate200
math : true
tags: [인터넷,네트워크 ]

---
## 인터넷
- 전세계 수많은 컴퓨터와 네트워크가 연결된 거대한 정보 통신망 
- TCP/IP 프로토콜을 기반으로 한다. 
- 다양한 장치들이 서로 데이터를 주고 받을수 있도록 한다.
- **구성요소** : client, server, 라우터, 백본망, DNS
## 네트워크
- **네트워크**는 두대 이상의 컴퓨터가 데이터를 주고받기 위해 연결된 구조이다. 
- **목적** : 자원공유, 통신,데이터 교환
- **전송매채**
    - 유선 : UTP ,광케이블
    - 무선 : WIFI,LTE,5G
- **프로토콜**: TCP/IP ,HTTP,FTP,DNS 등등

## LAN,WAN,ISP
- **LAN**: Local Area Network
    - 작은범위(사무실,가정)에 구축된 네트워크
    - 빠른속도 (100Mbps ~ 수 Gbps)
    - 내부 IP사용, NAT로 외부와 연결 
- **WAN** :Wide Area Network
    - 국가간 도시간 장거리 통신망 
    - 인터넷이 대표적인 예시이다.
    - 다양한 중계장비(라우터,게이트웨이)필요
- **ISP**: Internet Service Provider
    - 인터넷 접속을 가능하게 해주는 회사
    - 유동/고정IP,DNS제공,회선관리 등 서비스 제공
    

## IP주소와 MAC주소

| 구분 | IP 주소 (Logical Address) | MAC 주소 (Physical Address) |
| :--- | :--- | :--- |
| **정의** | 논리적 네트워크 주소 | 물리적 장비 주소 |
| **역할** | 통신 대상 위치 지정 | 장비 고유 식별 |
| **예시** | 192.168.0.15 | C8:3A:35:01:92:FA |
| **계층** | OSI 3계층 | OSI 2계층 |
| **변경** | DHCP로 변경 가능 | NIC에 고정 (수동 변경 가능) |

## DNS동작원리
- DNS(Domain Name System)은 사람이 사용하는 도메인 이름을 IP주소로 변환해주는 시스템이다.
### 작동순서
1. 사용자가 도메인 입력(ex: www.google.com)
2. OS/브라우저의 DNS캐시 확인
3. 로컬 DNS 서버로 질의 
4. 필요한 경우 루트 -> TLD -> 권한있는 DNS서버를 거쳐 IP주소를 획득
5. IP주소반환 -> 접속

## tracert 명령어의 역할과 관리
- tracert 또는 traceroute 는 특정 목적지 까지 **어떤 경로(라우터)를 거쳐 가는지** 보여주는 명령어 이다. 
### 동작원리
- packet의 TTL(Time To Live) 값을 1부터 증가시키며 전송
- TTL 초과시 중간 라우터에서 ICMP오류응답
- 최종 목적지에 도달할 때까지 **각 경유지와 응답시간**기록