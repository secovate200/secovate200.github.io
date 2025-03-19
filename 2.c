#include<stdio.h>
#include<string.h>
#include<stdlib.h>
typedef struct{
    char StudentId[10];
    char Name[10];
    int Grade;
    char Major[51];
}Student;// 구조체 정의
int main(void){
    Student *s= malloc(sizeof(Student));
    strcpy(s->Name,"Name1");
    strcpy(s->StudentId,"202012345");
    s->Grade =4;
    strcpy(s->Major,"컴퓨터공학과");
    // 구조체 내부 변수들 출력
    printf("이름:%s\n",s->Name);
    printf("학년:%d\n",s->Grade);
    printf("학번:%s \n",s->StudentId);
    printf("전공:%s\n",s->Major);

    return 0;
}