#include <stdio.h>
#include <stdlib.h>

struct node
{
    int data;
    struct node *next;
};
struct node *start=NULL;

void insert_at_last();
void print_list();

int main(){
    for(int i=1;i<=4;i++){
        insert_at_last();
    }
    print_list();
}

void insert_at_last(){
    int value;
    printf("Enter the value to add : ");
    scanf("%d",&value);
    struct node *temp = start;
    struct node *p = (struct node*)malloc(sizeof(struct node));
    if (p == NULL){
        printf("Link List is full");
    }
    else if(start == NULL){
        p->data = value;
        p->next = NULL;
        start = p;
    }
    else{
        p->data = value;
        p->next=NULL;
        while(temp->next!=NULL){
            temp=temp->next;
        }
        temp->next = p;
    }
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