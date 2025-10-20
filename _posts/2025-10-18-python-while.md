---
title: "4.파이썬 - 반복문"
date: 2025-10-17 12:10 +0900
categories: ["Programing","Python"]
tags: [python]
mermaid: true
---
## 반복문
### 반복문이란?
- `반복문`은 특정 조건을 만족하는 동안 **같은 작업을 반복적으로 실행**하는 제어문이다.
- `for`문과 `while`문을 통해 반복문을 사용한다.
### 1. `for`문
- 파이썬의 `for`문은 **시퀀스 자료형(리스트 튜플 문자열 등)**을 순회하며 반복 작업을 수행한다.
- C언어의 `for`문과 비슷하지만 파이썬에서는 **반복할 범위나 요소를 명시적으로 지정**할수 있어 코드가 직관적이다. 
#### `range()` 함수와 함께 사용하는 `for`문
- `range()`함수는 **숫자범위**를 생성하여 반복문을 쉽게 구현할 수 있다.
- `range(start, stop, step)`형식으로 시작값,종료값,증가값을 지정할수 있다.

```python
for i in range(5):
    print(i)  # 0, 1, 2, 3, 4가 출력됨
```
- `range()`함수는 **종료값**을 포함하지 않으므로 `range(5)`는 0부터 4까지의 값을 생성한다.

```python
for i in range(1, 6):  # 1부터 5까지
    print(i)
```
#### 리스트와 함께 사용하는 `for`문 
- 파이썬에서는 리스트와 같은 `시퀀스 자료형을 순회`하며 값을 처리 할수 있다. 

```python
fruits = ["apple", "banana", "cherry"]
for fruit in fruits:
    print(fruit)
```

### 2. `while`문
- `while`문은 **조건이 참**일 동안 계속해서 반복하는 구조
- 조건이 거짓이 되면 반복을 종료한다.
- C언어의 `while`문과 동일하지만 파이썬에서는 조건이 더 직관적으로 표현된다. 

```python
x = 0
while x < 5:
    print(x)
    x += 1  # x 값이 1씩 증가
```
### 3. `break`와 `continue`
- 파이썬에서는 `break`는 **반복문을 종료**시킨다.
- `continue`는 **현재 반복을 건너뛰고 다음 반복으로 넘어간다.**

#### `break` 예시
- `break`는 조건을 만족할 경우 반복문을 **즉시 종료**한다. 

```python
for i in range(10):
    if i == 5:
        break  # i가 5일 때 반복 종료
    print(i)
```
#### `continue`예시 
- `continue`는 현재 반복을 **건너뛰고 다음 반복을 시작**한다.

```python
for i in range(10):
    if i == 5:
        continue  # i가 5일 때만 건너뛰고 나머지는 출력
    print(i)
```