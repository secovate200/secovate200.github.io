---
title: "11.C언어 - 구조체"
date: 2025-10-08 12:30 +0900
categories: ["Programing","C"]
tags: [c]
mermaid: true
---
## 구조체란?
- **구조체(struct)** 는 서로 다른 자료형의 데이터를 묶을수 있는 사용자 정의자료형이다.
## 일반 구조체
### 구조체 정의
```c
struct Student {
    char name[20];
    int age;
    float grade;
};
```
### 구조체 변수 선언 및 초기화
```c
struct Student s1;
struct Student s2 = {"Jisoo", 22, 3.9};
```
### 구조체 맴버접근
```c
s1.age = 20;
s1.grade = 4.3;
strcpy(s1.name, "Seoyeong");
```
- `.`연산자를 사용하여 구조체 맴버에 접근합니다.
### 구조체 배열
```c
struct Student class[2] = {
    {"Minji", 20, 3.5},
    {"Yuna", 21, 3.7}
};
```
## 구조체포인터
### 선언과 접근
```c
struct Student s = {"Hong", 19, 3.8};
struct Student *p = &s;
```
### 구조체 포인터 맴버접근
```c
printf("%s\n", p->name);  // p가 가리키는 구조체의 name 출력
p->age = 20;               // 나이 변경
```
- `->`연산자는 구조체 포인터가 가리키는 맴버에 접근할때 사용한다.
### 함수전달
```c
void update(struct Student *stu) {
    stu->grade += 0.5;
}
```
## 구조체 typedef로 간결하게 만들기
### typedef란?
- `typedef`는 **기존 자료형에 새로운 이름을 부여하는 키워드**
- 구조체 이름을 간단히 줄일수 있다
- 포인터나 배열 함수 포인터를 정의할때도 유용하다.

```c
typedef struct Student {
    char name[20];
    int age;
    float grade;
} Student;

Student s1 = {"Jisoo", 22, 3.9};
```
## typedef의 다양한 활용예시
### 포인터 타입 단순화
```c
typedef int* IntPtr;

IntPtr a, b;  // a와 b는 모두 int 포인터
```
### 배열 타입 정의
```c
typedef int ScoreArray[5];

ScoreArray scores = {90, 85, 78, 92, 88};
```
### 함수 포인터 정의
```c
typedef int (*OpFunc)(int, int);

int add(int a, int b) { return a + b; }

OpFunc op = add;
printf("%d\n", op(3, 5));
```

