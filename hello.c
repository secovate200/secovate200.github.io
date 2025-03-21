//1번째 예시에서 뺄셈 동작을 하는 sub() 구현하기
#include <stdio.h>

int add(int a, int b) {
    return a + b;
}
int sub(int a,int b){
  return a-b;
}
int main() {
    int result = add(5, 10);
    printf("The add result is %d\n", result);
    result=sub(5,10);
    printf("The sub result is %d\n", result);
    return 0;
}
