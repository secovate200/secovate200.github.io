---
title: 1.C언어 상수와 변수
author: secovate200
date: 2025-03-10 11:20:00 +0900
categories: [Programing]
tags: [C]
mermaid: true
---
## 1. 개념
 - 변수는 변할수 있는 데이터
 - 상수는 변하지 않는 데이터
 - 변수 선언시 자료형과 변수명을 입력하여야 한다. (`원하는 경우 초기값을 적용할수 있다`)

 ```c
 
 #include <stdio.h>
 int main(void) {
 int a = 7; // a라는 이름을 가진 정수형 변수 선언후 7 이라는 정수 데이터를 초기값으로 설정
 printf("The number is %d.\n", a);
 return 0;
 
}
 ```
## 2. 자료형

|타입|설명|
|---|---|
|`int`|일반적인정수형을표현할때사용 (억단위)|
|`long long`|숫자가 긴 정수형을 표현할때 사용|
|`double`|일반적인 실수형을 표현할때 사용|
|`float`|실수형 표현시에 사용한다. |
|`char`| 문자를 표현할때 사용|
 
```c
#include <stdio.h>

int main() {
    int num = 10;            // 정수형
    long long bigNum = 10000000000;  // 큰 정수형
    float smallDecimal = 3.14f;  // 작은 실수형
    double bigDecimal = 12345.6789; // 큰 실수형
    char letter = 'A';       // 문자형

    // 출력
    printf("정수: %d\n", num);
    printf("큰 정수: %lld\n", bigNum);
    printf("작은 실수: %.2f\n", smallDecimal);
    printf("큰 실수: %.4lf\n", bigDecimal);
    printf("문자: %c\n", letter);

    return 0;
}

```