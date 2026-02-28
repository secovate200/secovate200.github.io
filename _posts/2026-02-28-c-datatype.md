---
title: "C언어 - 자료형(Data Types)"
date: 2026-02-28-17:00:00 +0900
categories: [Programing,C]
author: "secovate200"
math : true
tags: [C,DataType]

---
- C언어에서는 변수를 사용하기 위해서 **어떤 종류의 값**을 저장할것인지 먼저 정의해야 한다.
- 이때 사용하는 것이 **자료형(Data Type)** 이라고 한다.
- 자료형은 값의 **종류와 크기**를 결정한다.

## 변수 선언 방법
- 변수를 선언할때에는 먼저 자료형을 지정한 뒤 변수 이름을 붙인다.

```c
// 예시
int age;
float height;
char grade;
```

- 선언과 동시에 값을 넣는 것도 가능하다.

```c
int age= 26;
float height = 175.5;
char grade ='A';
```

## 주요 기본 자료형

| 자료형 | 일반적 크기 | 설명 |
|---|---|---|
| `char` | 1 byte | 문자 1개 저장 (ASCII 문자) |
| `int` | 4 bytes | 정수 저장 |
| `float` | 4 bytes | 실수 저장 (소수점 표현 가능) |
| `double` | 8 bytes | 더 정밀한 실수 표현 |
| `short` | 2 bytes | 상대적으로 작은 정수 |
| `long` | 4 또는 8 bytes | 상대적으로 큰 정수 |

## signed와 unsigned의 차이
- 정수형 자료형에는 **부호가 있는(signed)** 형식과 **부호가 없는(unsigned)**형식이 있다. 

- `signed int`: 양수와 음수를 모두 저장 가능
- `unsigned int`:음수는 저장할 수 없고, 대신 양수 범위가 2배 넓음

```c
signed int a = -1;
unsigned int b = 100;
```