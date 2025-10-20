---
title: "6.파이썬 - 딕셔너리와 집합"
date: 2025-10-18 12:10 +0900
categories: ["Programing","Python"]
tags: [python]
mermaid: true
---
## 딕셔너리
- **딕셔너리**는 **키(key)**와 **값(value)**을 쌍으로 저장하는 매핑 자료형이다.
### 딕셔너리 생성
- 딕셔너리는 중괄호 `{}`를 사용하여 생성한다.
- 각 항목은 키와 값으로 이루어진다.
- 키는 고유해야 하고 값을 어떤 자료형이든 가능하다.

```python

person = {"name": "John", "age": 30, "city": "New York"}

```
### 딕셔너리 항목 접근
- 딕셔너리에서 값을 접근하려면 키를 사용해야 한다. 

```python
print(person["name"])  # "John"
print(person["age"])   # 30
```
### 딕셔너리 메서드
- 딕셔너리는 여러가지 유용한 메서드를 제공한다.
- `get()`,`keys()`,`values()`,`items()`

```python

# get() 사용
print(person.get("name"))  # "John"

# keys(), values(), items()
print(person.keys())  # dict_keys(['name', 'age', 'city'])
print(person.values())  # dict_values(['John', 30, 'New York'])
print(person.items())  # dict_items([('name', 'John'), ('age', 30), ('city', 'New York')])

```

### 항목 추가 및 삭제
- 딕셔너리의 항목을 추가하거나 삭제할 수 있다. 
```python
# 항목 추가
person["job"] = "Developer"
print(person)  # {"name": "John", "age": 30, "city": "New York", "job": "Developer"}

# 항목 삭제
del person["city"]
print(person)  # {"name": "John", "age": 30, "job": "Developer"}
```

## 집합
- 집합은 순서가 없고 중복이 없는 자료형이다. 
- 수학에서의 집합 개념과 유사하다. 
- 집합연산을 쉽게 처리하는 것이 가능하다. 
- 파이썬의 집합은 중복된 항목을 자동으로 제거해준다. 

### 집합 생성 
- 집합은 중괄호 `{}`또는 `set()` 함수를 사용하여 생성한다.
```python
numbers = {1, 2, 3, 4, 5}
fruits = set(["apple", "banana", "cherry"])
```
### 집합연산
- 집합에서는 합집합,교집합,차집합 등의 연산을 쉽게 처리할 수 있다. 

```ptyhon

set1 = {1, 2, 3}
set2 = {3, 4, 5}

# 합집합
print(set1 | set2)  # {1, 2, 3, 4, 5}

# 교집합
print(set1 & set2)  # {3}

# 차집합
print(set1 - set2)  # {1, 2}

# 대칭 차집합
print(set1 ^ set2)  # {1, 2, 4, 5}

```
### 집합 메서드 
- 집합은 여러가지 유용한 메서드를 제공한다.
- 예를 들어 `add()`,`remove()`,`discard()`,`clear()`등을 사용한다.

```python
# 항목 추가
set1.add(6)
print(set1)  # {1, 2, 3, 6}

# 항목 제거
set1.remove(6)  # 6이 없으면 KeyError 발생
set1.discard(6)  # 6이 없어도 오류 없이 처리

# 집합 초기화
set1.clear()
print(set1)  # set()
```