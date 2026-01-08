#include <stdio.h>
#include <stdlib.h>

struct node
{
    int data;
    struct node *next;
};
struct node *start=NULL;
void create_list();
void reverse_list();
void print_list();

int main(){
    for(int i=1;i<=4;i++){
        create_list();
    }
    print_list();
    reverse_list();
    printf("Reversed list: \n");
    print_list();
}

void create_list(){
    int value;
    printf("Enter a value to add: ");
    scanf("%d",&value);
    struct node *p = (struct node*)malloc(sizeof(struct node));
    if (p==NULL){
        printf("list is full");
    }
    else if(start == NULL){
        p->data = value;
        p->next = NULL;
        start = p;
    }
    else{
        p->data = value;
        p->next = start;
        start = p;
    }
}

void reverse_list(){
    struct node *prev=NULL;
    struct node *cur=start;
    struct node *next=NULL;
    while(cur!=NULL){
        next=cur->next;
        cur->next=prev;
        prev=cur;
        cur=next;
    }
    start = prev;
}

void print_list(){
    struct node *temp = start;
    while(temp!=NULL)
    {
        printf("%d->",temp->data);
        printf("%d ",temp->next);
        temp = temp->next;
    }   
}
