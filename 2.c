#include<stdio.h>
#include<string.h>
#include<stdlib.h>
typedef struct{
    char StudentId[10];
    char Name[10];
    int Grade;
    char Major[51];
}Student;// ����ü ����
int main(void){
    Student *s= malloc(sizeof(Student));
    strcpy(s->Name,"Name1");
    strcpy(s->StudentId,"202012345");
    s->Grade =4;
    strcpy(s->Major,"��ǻ�Ͱ��а�");
    // ����ü ���� ������ ���
    printf("�̸�:%s\n",s->Name);
    printf("�г�:%d\n",s->Grade);
    printf("�й�:%s \n",s->StudentId);
    printf("����:%s\n",s->Major);

    return 0;
}