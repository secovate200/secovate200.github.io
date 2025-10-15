---
title: "9.C언어 - 포인터"
date: 2025-10-07 12:30 +0900
categories: ["Programing","C"]
tags: [c]
mermaid: true
---
## 포인터란?
- 포인터는 **값이 저장된 메모리의 주소를 저장하는 변수**이다.
- 포인터는 **"어떤 변수의 위치"를 기억**한다
### 포인터를 사용하는이유
- 함수에서 원본 데이터를 변경하고 싶을때
- 배열,문자열 등 **연속된 메모리**를 다룰때
- 동적 메모리 할당(malloc 등)에서 필수
- 구조체,함수 포인터등 고급기능 지원
## 포인터 선언

```c
int *p;
```

- `p`는 **정수형 변수의 주소를 저장할수 있는 포인터** 이다
## 주소와 참조
|기호|의미|
|---|----|
|`&`| 변수의 **주소**를 가져옴|
|`*`| 포인터가 가리키는 **값**을 참조|

```c
int a = 10;
int *p = &a;
printf("%d", *p);  // 출력: 10
```

### 용어 설명
- **주소(address)**: 변수 또는 데이터가 저장된 메모리 위치
- **참조(dereference)**: 포인터가 가리키는 실제값을 사용하는 것 
### 예제: 변수와 포인터 비교

```c
int x = 100;
int *ptr = &x;

printf("x의 값: %d\n", x);
printf("x의 주소: %p\n", &x);
printf("ptr의 값: %p\n", ptr);
printf("*ptr의 값: %d\n", *ptr);
```

## 포인터를 이용한 함수전달

```c
void modify(int *p) {
    *p = 999;
}

int main() {
    int num = 5;
    modify(&num);
    printf("%d\n", num);  // 출력: 999
}
```

## 포인터와 배열의 관계

```c
int arr[3] = {10, 20, 30};
int *p = arr;

printf("%d\n", *p);     // 10
printf("%d\n", *(p+1)); // 20
```

## 이중 포인터

```c
int a = 10;
int *p = &a;
int **pp = &p;

printf("%d\n", **pp);  // 출력: 10
```

## Call by Value vs Call by Reference
### call by value(값에 의한 호출)

```c
void change(int x) {
    x = 100;
}

int main() {
    int a = 5;
    change(a);
    printf("%d\n", a);  // 출력: 5
}
```

- 함수에 값만복사되어 전달됩니다.
- 원본은 변경되지 않습니다.
### Call by Reference (참조에 의한 호출)

```c
void change(int *x) {
    *x = 100;
}

int main() {
    int a = 5;
    change(&a);
    printf("%d\n", a);  // 출력: 100
}
```

- 주소(포인터)를 통해 전달되어 원본 데이터가 변경됩니다.