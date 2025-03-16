#include <stdio.h>
#include<stdlib.h>
int main(void) {
  int **arr=(int**)malloc(sizeof(int*)*3);
  for (int i=0; i<3;i++){
    *(arr+i)=(int*)malloc(sizeof(int)*3);
  }
  for(int i=0; i<3; i++){
    for(int j=0; j<3; j++){
      *(*(arr+i)+j)=i*3+j;
    }
  }
  for(int i=0; i<3; i++){
    for(int j=0; j<3; j++){
      printf("%d ",*(*(arr+i)+j));
    }
    printf("\n");
  }
  for( int i=0; i<3; i++){
    free(*(arr+i));
}
  free(*arr);
  return 0;
}