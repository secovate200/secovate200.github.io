#include<stdio.h>
#include<stdlib.h>
typedef struct Node{
    int data;
    struct Node *next;
}Node;

void add(Node* root, int data){
    Node *node =(Node*)malloc(sizeof(Node));
    node->data= data;
    node->next=root->next;
    root->next=node; 
    if(root== NULL){
        printf("root가 Null입니다.");
        return;
    }
}
void removeNode(Node *root){
    Node *front= root->next;
    root->next=front->next;
    free(front);
}

void freeall(Node *root){
    Node *cur= root->next;
    while(cur !=NULL){
        Node *next= cur->next;
        free(cur);
        cur= next;
    }
}
void showall(Node *root){
    Node *cur =root->next;
    while(cur != NULL){
        Node *next= cur->next;
        printf("%d -> ",cur->data);
        cur=next;

    }
    printf("NULL");
}

int main(void){
    Node *head= malloc(sizeof(Node));
    head->next=NULL;
    add(head,1);
    add(head->next,2);
    showall(head);
    freeall(head);
    return 0;
}