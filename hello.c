#include<stdio.h>
int main(void){
  int count =0;
  char name[20]="Hello World";
  for (int i=0; i<sizeof(name)/sizeof(char); i++){
    if(name[i]=='l'){
      count ++;
    }
  }
  printf("l�� ������ %d �� �Դϴ�",count);
  return 0;
}
if (condition)
{
  /* code */
}else if (condition)
{
  /* code */
}else{
  
}

