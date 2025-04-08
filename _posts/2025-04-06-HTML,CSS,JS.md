---
title: " [1주차 TIL] KnockOn Bootcamp HTML CSS JS"
date: 2025-04-06 11:30 +0900
categories: ["Web",'Web Overview']
tags: [web ,HTML,CSS,JS]
mermaid: true
---

# 1. HTML, CSS, JS의 기본 개념, 용도, 사용방법, 관계

| 항목 | 설명 |
|------|------|
| **HTML** (HyperText Markup Language) | 웹 페이지의 구조를 구성하는 언어. 텍스트, 이미지, 링크, 폼 등을 정의함 |
| **CSS** (Cascading Style Sheets) | 웹 페이지의 디자인(색상, 크기, 정렬 등)을 담당하는 언어. HTML 요소의 스타일 지정 |
| **JavaScript (JS)** | 웹 페이지에 동적인 기능을 추가하는 프로그래밍 언어. 이벤트 처리, 애니메이션 등에 사용됨 |

**관계 정리:**
- HTML: 웹 페이지의 뼈대  
- CSS: 디자인과 스타일  
- JavaScript: 동작과 인터랙션  
- 세 언어는 함께 사용되며, 보통 HTML 안에 CSS/JS를 연동해서 사용함

---

# 2. 웹 페이지 제작에 필요한 기본적인 HTML 태그들

| 태그 | 설명 |
|------|------|
| `<!DOCTYPE html>` | 문서의 HTML 버전 선언 |
| `<html>` | HTML 문서 전체를 감싸는 태그 |
| `<head>` | 문서 정보, CSS/JS 링크, 제목 등 |
| `<body>` | 실제 화면에 보이는 콘텐츠 |
| `<h1>` ~ `<h6>` | 제목 태그 (숫자가 작을수록 큼) |
| `<p>` | 문단 텍스트 |
| `<a href="">` | 하이퍼링크 연결 |
| `<img src="">` | 이미지 출력 |
| `<ul>`, `<ol>`, `<li>` | 리스트 항목 (순서 없는/있는) |
| `<div>` | 블록 영역 구분 |
| `<span>` | 인라인 요소 (텍스트 스타일링 등) |
| `<form>`, `<input>`, `<button>` | 사용자 입력 폼 요소들 |

---

# 3. 스타일링을 위한 CSS의 기본적인 문법과 속성들

##  기본 문법
```css
선택자 {
  속성: 값;
  속성: 값;
}
```

##  주요 선택자

| 선택자 | 설명 |
|--------|------|
| `*` | 전체 선택자 |
| `태그명` | 특정 HTML 태그 (예: `p`, `div`) |
| `.클래스명` | 클래스 선택자 |
| `#아이디명` | 아이디 선택자 |

##  주요 스타일 속성

| 속성 | 설명 | 예시 |
|------|------|------|
| `color` | 글자 색상 | `color: red;` |
| `background-color` | 배경색 | `background-color: yellow;` |
| `font-size` | 글자 크기 | `font-size: 16px;` |
| `text-align` | 텍스트 정렬 | `text-align: center;` |
| `margin` | 바깥 여백 | `margin: 10px;` |
| `padding` | 안쪽 여백 | `padding: 5px;` |
| `border` | 테두리 | `border: 1px solid black;` |
| `width`, `height` | 크기 지정 | `width: 100px; height: 200px;` |

---

# 4. 웹 페이지의 동적 기능을 위한 JS의 기본적인 문법과 함수들

##  변수 선언
```js
let a = 10;
const b = 20;
```

##  조건문
```js
if (a > 10) {
  console.log("a는 10보다 큽니다");
} else {
  console.log("a는 10 이하입니다");
}
```

##  반복문
```js
for (let i = 0; i < 5; i++) {
  console.log(i);
}
```

##  함수 선언 및 호출
```js
function sayHello(name) {
  alert("안녕, " + name);
}
sayHello("철수");
```

##  이벤트 처리
```js
document.getElementById("btn").addEventListener("click", function() {
  alert("버튼이 클릭되었습니다!");
});
```


## 도전
- 간단한 자기소개 페이지 만들기

```html
<!DOCTYPE html>
<html lang="ko">
<head>
  <meta charset="UTF-8">
  <meta name="viewport" content="width=device-width, initial-scale=1.0">
  <title>자기소개</title>
  <link rel="stylesheet" href="styles.css">
</head>
<body>
  <div class="container">
    <h1>안녕하세요, 저는 김민섭입니다!</h1>
    <p>저는 보안에 관심이 있습니다.. 현재는 웹해킹을 공부하고 있습니다. </p>
    <h2>연락처</h2>
    <p>Email: secovate200@gmail.com</p>
  </div>
</body>
</html>

```

- 계산기 페이지 만들기

```html 

<!DOCTYPE html>
<html lang="ko">
<head>
  <meta charset="UTF-8" />
  <meta name="viewport" content="width=device-width, initial-scale=1.0"/>
  <title>간단한 계산기</title>
  <style>
    body {
      background: #f5f5f5;
   
      display: flex;
      justify-content: center;
      align-items: center;
      height: 100vh;
      margin: 0;
    }
    .calculator {
      background: #fff;
      border-radius: 12px;
      padding: 30px 25px;
      box-shadow: 0 5px 15px rgba(0,0,0,0.1);
      text-align: center;
      width: 350px;
    }
    .calculator h2 {
      margin-bottom: 20px;
      color: #333;
    }
    input[type="text"] {
      width: 100%;
      padding: 12px;
      font-size: 1.2em;
      margin-bottom: 15px;
      border: 1px solid #ccc;
      border-radius: 6px;
    }
    button {
      padding: 10px 25px;
      font-size: 1em;
      border: none;
      background-color: #4CAF50;
      color: white;
      border-radius: 6px;
      cursor: pointer;
    }
    button:hover {
      background-color: #45a049;
    }
    .result {
      margin-top: 15px;
      font-size: 1.3em;
      color: #222;
    }
  </style>
</head>
<body>
  <div class="calculator">
    <h2>계산기</h2>
    <input type="text" id="expression" placeholder="수식을 입력하세요 (예: 1 + 2 * 3)" onkeydown="handleKey(event)">
    <button onclick="calculate()">계산</button>
    <div class="result" id="result">=</div>
  </div>

  <script>
    function handleKey(e) {
      if (e.key === "Enter") {
        calculate();
      }
    }

    function calculate() {
      const input = document.getElementById("expression").value;
      const resultElement = document.getElementById("result");

      try {
        const sanitized = input.replace(/[^0-9+\-*/(). ]/g, '');
        const result = new Function(`return (${sanitized})`)();
        resultElement.textContent = `= ${result}`;
      } catch {
        resultElement.textContent = "오류: 올바른 수식을 입력하세요.";
      }
    }
  </script>
</body>
</html>

 ```