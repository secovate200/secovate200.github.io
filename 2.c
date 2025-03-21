#include<stdio.h>
#include<stdlib.h>
typedef struct Node
{
    int data;
    struct Node *prev;
    struct Node *next;
    
}Node;
Node *head, *tail; //head와 Tail을 선언한다.

//삽입함수
void insert(Node* root,int data){
    Node *node = (Node*)malloc(sizeof(Node));
    node->data = data;
    
    Node* cur = root->next;
    root->next = node;
    node->prev = root;
    node->next = cur;


}

void remove_node(Node*root){
    Node *node =root->next;
    root->next= node->next;
    Node *next = node->next;
    next->prev=root;
    free(node);

}
void show(){
    Node *cur=head->next;
    while(cur!=tail){
        printf("%d ",cur->data);
        cur=cur->next;
    }
}
int main(void){
    head = (Node*)malloc(sizeof(Node));
    tail = (Node*)malloc(sizeof(Node));
    head->next=tail;
    head->prev=head;
    tail->next=tail;
    tail->prev=head;
    insert(head,2);
    insert(head,3);
    insert(head,4);
    insert(head,5);
    show();
    printf("\n");
    remove_node(head->next);
    show();
    return 0;
}