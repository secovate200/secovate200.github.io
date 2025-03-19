#include<stdio.h>
int main(int argc, char** argv,char **envp){
  int a=333333;
  int b=135135;
  int c=0xCC;

  int xor_a=a^c;
  int xor_b=b^c;

  int res_1=xor_a^c;
  int res_2=xor_b^c;

  int res_3=a^b;
  int res_4=xor_a^xor_b;

  if(res_1==a){
    puts("How is this True?");
  }
  if(res_2==b){
    puts("Wow is this also True?");
  }
  if(res_3==res_4){
    puts("It Works..?");
  }
  else{
    puts("It Works..!");
  }
  puts("It Works!");
  puts("Xor is Good to encryption and descryption!");
  return 0;
}