#include<stdio.h>
int main(void){
  int count =0;
  char name[20]="Hello World";
  for (int i=0; i<sizeof(name)/sizeof(char); i++){
    if(name[i]=='l'){
      count ++;
    }
  }
  printf("l의 개수는 %d 개 입니다",count);
  return 0;
}