---
title: "2.C언어 - datatype"
date: 2025-10-02 12:30 +0900
categories: ["Programing","C"]
tags: [c]
mermaid: true
---
## 자료형 의미
- c언어에서 변수를 사용하기 위해 **어떤 종류의 값**을 저장할것인지 먼저 정의해야 한다.
- 이때 사용하는 것이 **자료형** 이다.
- 자료형은 변수에 저장될 값의 종류와 크기를 결정한다.
- 정확한 자료형 선택은 메모리 사용의 효율성을 높히고 보다 명확하게 작성하는데 도움이 된다. 


## 변수 선언 방법
- 변수를 선언할 때에는 먼저 자료형을 지정한뒤 변수명을 붙인다.

```c

자료형 변수이름;

// 예시
int age;           // 정수형 변수 age 선언
float height;      // 실수형 변수 height 선언
char grade;        // 문자형 변수 grade 선언

```

- 선언과 동시에 값을 넣는것도 가능하다.
```c
int age = 25;
float height = 175.5;
char grade = 'A';
```
## 주요 기본 자료형
| 자료형 | 일반적 크기 | 설명 |
|------|-------|----|
| **char** | 1byte |문자1개 저장(ASCII문자)|
| **int** | 4byte | 정수저장 |
| **float** | 4 byte | 실수저장 (소수점 표현가능)|
| **double** | 8 byte | 더 정밀한 실수표현 |
| **short** | 2 byte | 상대적으로 작은 정수 |
| **long** | 4 또는 8 byte | 상대적으로 큰 정수 |
- ⚠️ 실제 크기는 시스템이나 컴파일러에 따라 달라질 수 있습니다.
### signed와 unsigned의 차이
- 정수형 자료형에는 부호가 있는(signed) 형식과 부호가 없는(unsigned) 형식이 있습니다.
    - signed int: 양수와 음수를 모두 저장 가능
    - unsigned int: 음수는 저장할 수 없고, 대신 양수 범위가 2배 넓음

```c

signed int a = -1;
unsigned int b = 100;

```
