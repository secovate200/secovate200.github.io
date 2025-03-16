# 1~n의 번호가 있는 택배상자가 창고에 존재
#왼쪽에서 오른쪽으로 가면서 1번 상자부터 번호 순서대로 택배 상자를 한 개씩 놓습니다.
# 가로로 택배 상자를 w개 놓았다면 이번에는 오른쪽에서 왼쪽으로 가면서 그 위층에 택배 상자를 한 개씩 놓습니다.

def solution(n,w,num):
    answer=0
    box= None
    floor_count=[]
    numbers = list(range(1,1+n))
    box_storage=[numbers[i:i+w] for i in range(0,len(numbers),w)]

    for i in  range(len(box_storage)):
        floor_count.append(len(box_storage[i]))
        if (i+1)%2==0:
            box_storage[i].reverse()

    for i in range(len(box_storage)):
            try:
                box=box_storage[i].index(num)
                
            except:
                pass
    for i in floor_count:
         if box<i-1:
              answer+=1
    return answer+1

print("정답",solution(13,1,6))