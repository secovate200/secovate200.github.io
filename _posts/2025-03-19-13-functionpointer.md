---
title: 13. 함수포인터
date: 2025-03-19 11:50:00 +0900
categories: [Programing,C]
tags: [C]
mermaid: true
---
## 함수 포인터
- C언어에서는 함수의 이름을 이용해 특정한 함수를 호출합니다.
- 함수 이름은 메모리 주소를 반환합니다.

```c
#include<stdio.h>
void function(){
    printf("It's function");
}
int main(void){
    printf("%d",function);
    return 0;
}
```

- 해당 코드를 실행하면 해당 함수의 메모리 주소가 출력됩니다.

## 매개변수 및 반환 자료형이 없는 함수포인터
- 함수포인터는 특정한 함수의 반환 자료형을 지정하는 방식으로 선언할수도 있습니다.
- 함수 포인터를 이용하여 형태가 같은 서로 다른 기능의 함수를 선택적으로 사용할수 있습니다.

```shell

반환자료형(*이름)(매개변수) = 함수명;

```

```c

#include<stdio.h>
void function1(){
    printf("It's function1\n");
}
void function2(){
    printf("It's function2\n");
}
int main(void){
    void (*fp)() = function1;
    fp();
    fp= function2;
    fp();
    return 0;
}

```

## 매개변수 및 반환 자료형이 있는 함수포인터
```c
#include<stdio.h>
int add(int a, int b){
    return a+b;
}
int sub(int a,int b){
    return a-b;
}
int main(void){
    int (*fp)(int,int) = add;
    printf("%d\n",fp(10,3));
    fp= sub;
    printf("%d\n",fp(10,3));
    return 0;
}

```
## 함수 포인터를 반환하여 사용하기

```c
#include<stdio.h>
int add(int a,int b){
    return a+b;
}
int (*process(char* a))(int,int){
    printf("%s\n",a);
    return add;
}
int main(void){
    printf("%d",prcess("1과 2를 더해보겠습니다")(1,2));
    return 0;
}
```