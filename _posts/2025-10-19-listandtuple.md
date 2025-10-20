---
title: "5.파이썬 - 리스트 튜플"
date: 2025-10-18 12:10 +0900
categories: ["Programing","Python"]
tags: [python]
mermaid: true
---
## 리스트와 튜플
### 리스트
- **리스트**는 파이썬에서 가장 많이 사용되는 **시퀀스 자료형**중 하나이다.
- 여러개의 값을 순차적으로 저장할 수 있는 자료형이다. 
- 가변 자료형으로 리스트의 항목을 수정 ,삭제 가능하다. 

#### 리스트 생성
- 리스트는 대괄호 `[]`를 사용하여 생성한다. 
- 리스트 내에는 다양한 데이터타입을 혼합하여 저장할수 있다. 

```python
fruits = ["apple", "banana", "cherry"]
numbers = [1, 2, 3, 4]
mixed = [1, "apple", 3.14, True]
```
#### 리스트 인덱싱과 슬라이싱
- 리스트는 **인덱스를 통해 각 항목에 접근**할수 있다.
- **슬라이싱**을 통해 리스트의 일부를 추출할수 있다.

```python
# 인덱싱
print(fruits[0])  # "apple"
print(fruits[-1])  # "cherry"

# 슬라이싱
print(fruits[1:3])  # ["banana", "cherry"]
```
#### 리스트 메서드
- 리스트는 여러 가지 유용한 메서드를 제공한다.
- 예를 들어 `append()`,`remove()`,`pop()`,`short()`등을 사용할수 있다.

```python
fruits.append("orange")  # "orange" 추가
fruits.remove("banana")  # "banana" 제거
fruits.sort()  # 리스트 정렬
```
### 튜플
- **튜플**은 불변 자료형이다. 
- 한번 생성되면 **수정**,**추가**,**삭제**가 불가능 하다. 
- 튜플은 **소괄호()**로 생성한다. 
- 리스트와 값이 변경되지 않기에 성능상 이점이 있다.

#### 튜플생성
- 튜플은 소괄호 `()`를 사용하여 생성한다.
- 튜플은 리스트처럼 여러 데이터를 혼합할 수 있다.

```python
coordinates = (10.0, 20.0)
single_item_tuple = (5,)  # 하나의 항목을 가진 튜플은 뒤에 콤마가 필요
mixed_tuple = (1, "apple", 3.14, False)
```
#### 튜플 인덱싱과 슬라이싱
- 튜플도 리스트처럼 **인덱싱**과 **슬라이싱**을 통해 접근 가능하다.

```python
# 인덱싱
print(coordinates[0])  # 10.0

# 슬라이싱
print(mixed_tuple[1:3])  # ["apple", 3.14]
```

#### 튜플의 불변성
- 튜플은 **불변**이기 때문에 항목을 수정하려고 하면 오류가 발생한다. 

### 리스트와 튜플의 슬라이싱
- 파이썬에서 **슬라이싱**은 리스트,튜플,문자열에서 **부분적 데이터를 추출**할때 사용한다. 
- `start:stop:step`형식으로 작성한다. 
- **start**는 시작인덱스, **`stop`**은 끝 인덱스, **`step`**은 간격을 지정한다. 
#### 기본 슬라이싱
- 리스트나 튜플에서 슬라이싱을 사용할때, **시작인덱스는 포함되고, 끝 인덱스는 포함되지 않는다**
    - `start:stop`의 경우 `start`부터 `stop-1`까지 추출한다.

```python
# 리스트 슬라이싱
fruits = ["apple", "banana", "cherry", "date", "elderberry"]
print(fruits[1:4])  # ["banana", "cherry", "date"]
```
#### step 사용하기
- 슬라이싱에서 **step**을 사용하여 간격을 지정할 수 있다.
    - `step=2`로 설정하면 2칸씩 건너뛰며 항목을 추출한다.

```python
# step 사용
print(fruits[0:5:2])  # ["apple", "cherry", "elderberry"]
```
#### negative index와 reverse 슬라이싱
- 슬라이싱에서 **음수 인덱스**를 사용할수 있다.
- 음수 인덱스는 리스트의 **뒤에서부터** 시작하는 인덱스를 의미 한다. 
```python
# 음수 인덱스 사용
print(fruits[-1])  # "elderberry"
print(fruits[-3:])  # ["cherry", "date", "elderberry"]

# 역순으로 슬라이싱
print(fruits[::-1])  # ["elderberry", "date", "cherry", "banana", "apple"]
```
#### 전체 리스트 슬라이싱
- 슬라이싱에서 **시작과 끝은 생략**하면 전체리스트를 그대로 추출할수 있다. 
- 이때 step을 지정하면 특정 간격으로 항목 선택이 가능하다. 

```python
# 전체 리스트 슬라이싱
print(fruits[:])  # ["apple", "banana", "cherry", "date", "elderberry"]
```

#### 문자열 슬라이싱
- 문자열은 리스트와 유사하게 슬라이싱이 가능하다.
- 문자열은 불변 자료형이지만 슬라이싱을 통해 부분 문자열을 추출하는 것이 가능하다. 


```python
# 문자열 슬라이싱
text = "Hello, World!"
print(text[0:5])  # "Hello"
print(text[7:12])  # "World"
```