---
title: "1.C언어"
date: 2025-10-01 11:30 +0900
categories: ["Programing","C"]
tags: [c]
mermaid: true
---
## 1.C언어
```c
#include <stdio.h>

int main()
{
    printf("Hello World");

    return 0;
}
```
- C언어는 컴퓨터에 특정 명령을 내리기 위한 프로그래밍 언어중 하나이다.
- 위 코드는 `Hello World`라는 문자열을 출력하도록 시키는 코드이다.

- `컴파일 언어`는 인터프리터 언어와 반대되는 개념으로 코드 전체를 하아의 실행파일(흔히 말하는 `.exe`파일)로 만들어서 `컴퓨터에 전달`한다.
- 이와 같은 과정을 `컴파일`이라고 한다.

## 2. 코드 분석
```c
#include <stdio.h>

int main(){
	printf("Hello World!\n");
	return 0;
}
```
### 1. `#include<[filename]>`
- `#include`는 뒤에 나오는 파일을 포함하겠다는 의미이다. 
- 따라서 `stdio.h`파일을 포함하겠다는 의미이다.
- `stdio`는 `standard input/output`을 의미하며 printf,scanf등 출력과 입력기능을 하는 함수들이 들어있다.
### 2. `main function`
```c 
int main(void){}
```
- 위는 `main` 함수이다.
- 프로그램이 실행되면 `main`함수내부에 있는 코드가 실행된다.
### 3. `printf function`
```c
	printf("Hello World!\n");
```
- `printf`뒤 괄호 내부에 있는 문자열을 출력한다. 
### 4. Return statement
```c
	return 0;
```
- 컴퓨터에 0을 반환하고 종료하겠다는 의미이다
- 0을 반환하는 이유는 일반적으로 아무오류 없이 종료되었음을 알리기 위해사용한다
- 꼭 0일 필요는 없으며 큰 의미가 존재하지 않는다. 