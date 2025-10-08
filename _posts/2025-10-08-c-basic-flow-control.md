---
title: "15.C언어 - 프로그램 흐름제어"
date: 2025-10-08 12:10 +0900
categories: ["Programing","C"]
tags: [c]
mermaid: true
---
## 프로그램 흐름제어
- 프로그램 내에서 **실행 순서를 제어**하는 기술을 의미한다.
## 프로그램 종료 제어
1. `exit`함수
    - **프로그램을 즉시 종료**시킬수 있는 함수
    - `exit(0)`은 정상종료,`exit(1)`은 비정상종료

```c
    #include <stdlib.h>

if (error_condition) {
    printf("에러 발생, 프로그램 종료\n");
    exit(1);  // 프로그램을 비정상적으로 종료
}
```

2. `return`문
    - `return`은 함수내에서 **함수 실행을 종료**하고 **값을 반환**하는데 사용된다. 

## 함수흐름제어
1. `continue`문
    - **현재 반복을 건너뛰고** 다음 반복으로 이동하게 하는 제어문
    - 주로 **반복문**에서 사용된다. 

```c
for (int i = 0; i < 10; i++) {
    if (i == 5) {
        continue;  // i가 5일 경우, 아래 코드를 건너뛰고 다음 반복
    }
    printf("%d\n", i);
}
```

2. `break`문
    - 반복문 `switch`문을 **즉시 종료**시키는 제어문이다. 

```c
for (int i = 0; i < 10; i++) {
    if (i == 5) {
        break;  // i가 5일 때 반복문 종료
    }
    printf("%d\n", i);
}
```
