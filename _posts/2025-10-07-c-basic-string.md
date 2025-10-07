---
title: "10.C언어 - 포인터"
date: 2025-10-07 12:30 +0900
categories: ["Programing","C"]
tags: [c]
mermaid: true
---
## 문자열
- C언어에서 문자열은 **문자 배열(char[])**로 저장된다
- 마지막에는 반드시 **null문자(\\0)**가 포함되어야 문자열로 인식한다.

```c
char str1[] = "Hello";
char str2[6] = {'H', 'e', 'l', 'l', 'o', '\0'};
```
- 포인터로 선언할수 있다.
```c
char *str = "Hello";  // 문자열 상수 (읽기 전용)
```
## 문자열 입출력
### 출력
```c
char str[] = "C programming";
puts(str);            // 자동 줄바꿈
printf("%s\n", str); // 서식 지정자 사용
```
### 입력
```c
char name[20];
scanf("%s", name);  // 공백 전까지만 입력

fgets(name, sizeof(name), stdin);  // 공백 포함 입력
```
## 문자열과 포인터
- 문자열은 문자배열이다.
- 배열이름은 포인터처럼 동작한다.

```c
char str[] = "Hi";
char *p = str;

printf("%c\n", *p);     // H
printf("%c\n", *(p+1)); // i
```
## 문자열을 한 글자씩 출력
```c
char msg[] = "Hello";
for (int i = 0; msg[i] != '\\0'; i++) {
    printf("%c\n", msg[i]);
}
```
## 문자열 함수모음(<string.h>)
### strlen() - 문자열 길이 반환
- 널문자 제외한 길이 반환
- 반환값: size_t-> 정수형 (보통 unsigned int)
### strcpy()/strncpy() - 문자열 복사
- **src**를 **dest**에 복사
- 반환값: 복사된 문자열의 시작주소(`dest`)
```c
char *strcpy(char *dest, const char *src);
char *strncpy(char *dest, const char *src, size_t n);
```
- 예제
```c
char a[20];
strcpy(a, "Hi");

char b[10];
strncpy(b, "HelloWorld", 5);
b[5] = '\0';  // 꼭 널 문자 처리
```
### strcmp() / strncmp() - 문자열 비교
```c
int strcmp(const char *s1, const char *s2);
int strncmp(const char *s1, const char *s2, size_t n);
```
- 반환값
    - `0`: 같음
    - `<0` : s1 < s2
    - `>0` : s1 > s2

```c
if (strcmp(id, "admin") == 0) {
    printf("로그인 성공\n");
}
```
### strcat() / strncat() - 문자열 이어붙이기
```c
char *strcat(char *dest, const char *src);
char *strncat(char *dest, const char *src, size_t n);
```
- `desc`뒤에 `src`를 붙임
- 반환: 연결된 문자열의 시작주소(`dest`)
```c
char a[20] = "Hi ";
char b[] = "there!";
puts(strcat(a, b));  // Hi there!
```

### strchr() / strrchr() - 특정 문자찾기
```c
char *strchr(const char *str, int c);
char *strrchr(const char *str, int c);
```
- `strchr`: 처음 나오는 문자 주소 반환
- `strrchr`: 마지막 문자 주소 반환
- 반환값: 찾은 문자의 주소 (없으면 `NULL`)
### strstr() - 부분 문자열찾기
```c
char *strstr(const char *haystack, const char *needle);
```
- `neddle`이 포함된 주소 반환
- 없으면 `null`
### strtok() - 문자열 분할(토큰화)
```c
char *strtok(char *str, const char *delim);
```
- 구분자(`delim`) 기준으로 나눠진 `토큰 하나`를 반환
- 이후 호출시 `NULL`반환될때까지 반복
```c
char text[] = "C is fun";
char *token = strtok(text, " ");
while (token != NULL) {
    puts(token);
    token = strtok(NULL, " ");
}
```