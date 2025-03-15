#include<stdio.h>
void add(int *a){
 *a =(*a)+10;
}
 int main(void) {
  int a=7;
  add(&a);
  printf("%d",a);
  return 0;
 }