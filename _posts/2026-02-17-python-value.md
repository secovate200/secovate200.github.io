---
title: "파이썬 - 변수와 자료형의 개념"
date: 2026-02-17-17:00:00 +0900
categories: [Programing,python]
author: secovate200
math : true
tags: [python, 변수, 자료형]

---
- 파이썬에서 **변수**는 데이터를 저장하는 공간을 의미 한다.
- 변수는 메모리 위치를 가리키며 특정 값을 할당하거나 변경할수 있다.
- 파이썬의 특징 중 하나는 **동적타입**을 사용한다는 것이다.
```python
    x= 10
    y="Hello World"
```
## 기본자료형
- 파이썬에서 제공하는 자료형은 여러가지가 있다. 
- C언어와 비교하면 파이썬은 좀더 유연하고 직관적인 자료형 시스템을 가지고 있다.
### 1. 숫자형

```python

x=10 ## 정수형
y=3.14 ## 실수형

```

### 2. 문자열
- 파이썬에서 문자열은 작은따옴표(`'`)나 큰 따움표 (`"`)를 사용하여 생성할수 있다.

```python

    message = "Hello, Python!"

```

- 파이썬에서는 `str`자료형을 통해 쉽게 다룰수 있다. 

### 3. 불린형
- `True` 또는 `False` 값을 가질수 있다.
```python
is_active = True
is_sunny = False
``` 
### 자료형 변환
- 파이썬에서는 서로 다른 자료형간의 변환이 매우 쉽다.
```python
num_str ="123"
num_int =int(num_str)
```
### int(),float(),str() 함수
```python
num = 10
num_str = str(num)  # 정수를 문자열로 변환
num_float = float(num)  # 정수를 실수로 변환
```