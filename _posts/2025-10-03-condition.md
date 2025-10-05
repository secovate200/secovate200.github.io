---
title: "5.C언어 - 조건문"
date: 2025-10-03 12:30 +0900
categories: ["Programing","C"]
tags: [c]
mermaid: true
---
## 조건문
- C언어에서 조건문은 프로그램이 **어떤 조건을 평가한 후** , 그 결과에 따라 **서로 다른 코드 블록을 실행** 할수 있도록 해주는 구문이다.
## if문
```c
if(조건식){
    // 조건이 참일때 실행될 코드 
}
```
- if 문을 이용한 예제

    ```c
    #include<stdio.h>
    int main(void){
        int score =85;
        if (score>=80){
            printf("우수한 성적입니다");
        }
        return 0;
    }
    ```
- 위 코드는 if문을 이용한 예제로 score가 80 이상일때 `우수한 성적입니다`라는 문장을 출력하는 예제 이다.

## if~else문
```c
if (조건식) {
    // 조건이 참일 때
} else {
    // 조건이 거짓일 때
}
```
- if~else문을 이용한 예제

    ```c
    #include<stdio.h>
    int main(void){
        int age=15;
        if(age>=18){
            printf("성인입니다");
        }else{
            printf("성인이 아닙니다");
        }
        return 0;
    }
    ```

## else if문
```c
if (조건1) {
    // 조건1이 참일 때
} else if (조건2) {
    // 조건2가 참일 때
} else {
    // 위의 모든 조건이 거짓일 때
}
```
- 예제 코드
    ```c
        #include <stdio.h>

    int main() {
        int score = 72;

        if (score >= 90) {
            printf("A 학점입니다.");
        } else if (score >= 80) {
            printf("B 학점입니다.");
        } else if (score >= 70) {
            printf("C 학점입니다.");
        } else {
            printf("F 학점입니다.");
        }

        return 0;
    }
    ```
## switch문
```c
switch (변수) {
    case 값1:
        // 값1일 때 실행
        break;
    case 값2:
        // 값2일 때 실행
        break;
    default:
        // 어떤 case에도 해당하지 않을 때
}
```
- break를 사용하지 않으면 다음 case 문도 실행되므로 주의해야 합니다.

- 예제코드
    ```c
    #include <stdio.h>
    int main() {
        int menu = 2;

        switch (menu) {
            case 1:
                printf("1번 메뉴 선택");
                break;
            case 2:
                printf("2번 메뉴 선택");
                break;
            default:
                printf("유효하지 않은 선택입니다.");
        }

        return 0;
    }
    ```