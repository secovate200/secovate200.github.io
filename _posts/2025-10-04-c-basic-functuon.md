---
title: "8.C언어 - 함수"
date: 2025-10-04 12:30 +0900
categories: ["Programing","C"]
tags: [c]
mermaid: true
---
## 함수란?
- **하나의 특정한 작업을 수행하는 독립적인 코드 블록**이다. 
- 코드를 **모듈화**하고 **반복을 줄이며**,**유지보수를 쉽게**해준다.
- C 프로그램은 최소한 **하나의 함수인** `main`함수로 구성되어야 한다. 

## 함수의 구조
```c
반환형 함수이름(매개변수 목록) {
    // 함수 내용
    return 값;
}
// 예제
int add(int a, int b) {
    return a + b;
}
```
## 함수의 호출

```c
int result = add(3, 5);  // add 함수 호출, 결과를 result에 저장
```

- ⚠️ 함수는 호출된 위치로 **결과값을 반환(return)**하지만, void 함수는 반환하지 않습니다.
## 함수 선언, 정의
- **함수선언(선언부)** :컴파일러에게 함수의 존재와 형태를 알려줍니다.
- **함수의 정의(본문)**:실제 기능을 수행하는 코드 블록입니다.

```c
int multiply(int, int);    // 선언 (프로토타입)
int multiply(int x, int y) { return x * y; }  // 정의
```

## 매개변수와 인자

```c
void greet(char name[]) {
    printf("Hello, %s!\n", name);
}

greet("Seoyeong");  // "Seoyeong"은 인자(argument)
```

- 함수 정의에서 사용된 `name[]`는 **매개변수(agument,parameter)**
- 함수 호출시 넘겨주는 `"Seoyeong"`은 **인자(argument)**
## 반환값이 없는 함수(void)

```c
void sayHello() {
    printf("Hello!\n");
}
```

- `void`는 **반환할 값이 없음을 의미**합니다.
-  `return;`만 단독으로 사용가능합니다.
## 함수와 배열
- 배열을 함수로 넘기면 **포인터처럼 작동**합니다.

```c
void printArray(int arr[], int size) {
    for (int i = 0; i < size; i++) {
        printf("%d ", arr[i]);
    }
}
```