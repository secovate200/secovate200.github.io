---
title: "13.C언어 - 구조체"
date: 2025-10-08 12:10 +0900
categories: ["Programing","C"]
tags: [c]
mermaid: true
---
## 파일 입출력
- 파일 입출력은 프로그램에서 **외부파일을 읽거나 쓰는 작업**을 의미한다.
- C언어에서는 파일을 다룰수 있도록 **FILE**구조체와 관련함수를 제공한다.

## 파일열기 fopen()

```c
FILE *fp = fopen("data.txt", "w");
```

|모드|의미|
|`"r"`|읽기 전용( 파일 없으면 실패)|
|`"w"`|쓰기 전용(파일 초기화)|
|`"a"`|이어쓰기(append)|
|`"r+"`|읽기+쓰기|
|`"w+"`|새로쓰기+읽기|
### 경로 예시
- **현재 디렉토리**에서 파일을 열기:`"data.txt"`
- **절대경로**:`"/home/user/documents/data.txt"`
- **상대경로**:`"./data.txt"`(현재 폴더에 파일)

## 파일쓰기 fprintf(),fputs()

```c
FILE *fp = fopen("data.txt", "w");
fprintf(fp, "Hello, %d\n", 42);
fputs("Another line\n", fp);
fclose(fp);
```

## 파일 읽기

```c
FILE *fp = fopen("data.txt", "r");

int num;
char line[100];

fscanf(fp, "%d", &num);
fgets(line, sizeof(line), fp);

fclose(fp);
```

- **파일경로**가 올바르지 않거나 파일이 없으면 `fopen()`이 `NULL`을 반환하므로 ,**파일이 존재하는지 확인**하는 과정이 필요함

## 파일 존재여부 확인

```c
FILE *fp = fopen("file.txt", "r");
if (fp == NULL) {
    printf("파일을 찾을 수 없습니다.\n");
}

```

- 파일 경로가 잘못될 경우 NULL을 반환한다. 
## 파일 한줄씩 읽기

```c
char buffer[100];
FILE *fp = fopen("data.txt", "r");

while (fgets(buffer, sizeof(buffer), fp)) {
    printf("%s", buffer);
}

fclose(fp);
```
