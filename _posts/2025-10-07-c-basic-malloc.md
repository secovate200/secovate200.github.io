---
title: "12.C언어 - 구조체"
date: 2025-10-08 12:30 +0900
categories: ["Programing","C"]
tags: [c]
mermaid: true
---
### 동작할당이란?
- **프로그램 실행중(runtime)**에 메모리를 **필요한 만큼만 할당** 한다.
- 사용이 끝나면 **직접 헤제**하는 메모리 관리방식이다.
- `<stdlib.h>`에 정의되어 있다.

### malloc

```c
int *arr = (int *)malloc(sizeof(int) * 5);
```

- `sizeof(int)*5` -> `int`5개 크기
- 반환값:`void`-> 명시적으로 형변환
- 할당된 메모리에는 쓰레기 값이 들어있다.
### calloc

```c
int *arr = (int *)calloc(5, sizeof(int));

```

- 0으로 초기화된 `int` 5개 공간 할당
- `calloc(개수, 크기)` 형태
### realloc

```c
arr = (int *)realloc(arr, sizeof(int) * 10);
```

- 기존 메모리를 새로운 크기로 재할당
- 기존 내용은 유지됨 (가능한 경우)
### free

```c
free(arr);
```

- malloc() 또는 calloc()으로 할당한 메모리는 **반드시 free()**로 해제해야 한다
### 메모리 누수 예시(주의)

```c
int *ptr = (int *)malloc(sizeof(int) * 100);
// 작업 후 해제를 안 하면 메모리 낭비!
```

### 동적할당과 배열

```c
int n;
scanf("%d", &n);

int *arr = (int *)malloc(sizeof(int) * n);

for (int i = 0; i < n; i++) {
    scanf("%d", &arr[i]);
}
```

### 문자열 동적할당

```c
char *str = (char *)malloc(sizeof(char) * 20);
strcpy(str, "Hello");
```

### 구조체 동적할당

```c
typedef struct {
    char name[20];
    int age;
} Person;

Person *p = (Person *)malloc(sizeof(Person));
strcpy(p->name, "Lee");
p->age = 25;
```
