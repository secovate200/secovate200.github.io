---
title: " 드림핵 - Cookie "
date: 2025-04-08 11:30 +0900
categories: ["Web",'write up''DreamHack']
tags: [web ,HTML]
mermaid: true
---
## 문제 - cookie

설명
- 쿠키로 인증 상태를 관리하는 간단한 로그인 서비스입니다.
- admin 계정으로 로그인에 성공하면 플래그를 획득할 수 있습니다

- 우선 소스코드를 확인 해보았습니다.
```python
#!/usr/bin/python3
from flask import Flask, request, render_template, make_response, redirect, url_for

app = Flask(__name__)

try:
    FLAG = open('./flag.txt', 'r').read()
except:
    FLAG = '[**FLAG**]'

users = {
    'guest': 'guest',
    'admin': FLAG
}

@app.route('/')
def index():
    username = request.cookies.get('username', None)
    if username:
        return render_template('index.html', text=f'Hello {username}, {"flag is " + FLAG if username == "admin" else "you are not admin"}')
    return render_template('index.html')

@app.route('/login', methods=['GET', 'POST'])
def login():
    if request.method == 'GET':
        return render_template('login.html')
    elif request.method == 'POST':
        username = request.form.get('username')
        password = request.form.get('password')
        try:
            pw = users[username]
        except:
            return '<script>alert("not found user");history.go(-1);</script>'
        if pw == password:
            resp = make_response(redirect(url_for('index')) )
            resp.set_cookie('username', username)
            return resp 
        return '<script>alert("wrong password");history.go(-1);</script>'

app.run(host='0.0.0.0', port=8000)

```

- 여기서 일단 로그인 서비스 인것은 확실하게 알게 되었고 우리가 알수 있는 값이 있습니다.
- 바로username`guest`라는 것이다. 그리고 비밀번호도 `guest`라는것을 알게 되었다.
- 로그인 성공시 쿠키값이 세팅되는데 이것이 username이라는점에서 쿠키값 변조를 통해 플래그를 얻을 수 있을것이라고 의심을 하게 되었습니다. 

![이미지](https://github.com/secovate200/secovate200.github.io/blob/main/assets/img/dreamhack.png?raw=true)

- 시도를 해보았고 그 결과 플래그 값을 알수 있었습니다.

![flag](https://github.com/secovate200/secovate200.github.io/blob/main/assets/img/2025-04-08flag.png?raw=true)