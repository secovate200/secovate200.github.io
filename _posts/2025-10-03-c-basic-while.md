---
title: "6.C언어 - 반복문"
date: 2025-10-03 12:30 +0900
categories: ["Programing","C"]
tags: [c]
mermaid: true
---
## 반복문이란?
- 특정 조건을 만족하는 동안 **코드 블록을 반복실행**할 수 있도록 해주는 구조 
- C언어어서는 3개의 반복문이 있다.
    - `while`문
    - `for`문
    - `do~while`문

## 1. while

```c
while (조건식) {
    // 조건이 참인 동안 반복 실행
}
```

- 예제 코드 
    
    ```c
    #include <stdio.h>
    int main() {
        int i = 1;

        while (i <= 5) {
            printf("i = %d\n", i);
            i++;
        }

        return 0;
    }
    ```

## 2. for문

```c
for (초기식; 조건식; 증감식) {
    // 반복 실행할 코드
}
```

- 예제 코드 
    
    ```c
    #include <stdio.h>
    int main() {
        for (int i = 0; i < 3; i++) {
            printf("반복 %d\n", i);
        }

        return 0;
    }
    ```

## 3. do~while문

```c
do {
    // 적어도 한 번은 실행됨
} while (조건식);

```
- 예제코드
    ```c
    #include <stdio.h>
    int main() {
        int count = 1;

        do {
            printf("실행 %d\n", count);
            count++;
        } while (count <= 3);

        return 0;
    }
    ```
## 4. break와 continue문
- 예제 코드

    ```c
    #include <stdio.h>
    int main() {
        for (int i = 1; i <= 5; i++) {
            if (i == 3) {
                continue;
            }
            if (i == 5) {
                break;
            }
            printf("%d\n", i);
        }

        return 0;
    }
    ```
    
## 5. 이중반복문
- 이중반복문은 반복문 안에 반복문이 존재하는 구조이다.

```c
for (int i = 1; i <= 3; i++) {
    for (int j = 1; j <= 2; j++) {
        // i는 행, j는 열
    }
}
```