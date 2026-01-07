#include <stdio.h>
#include <stdlib.h>

struct node
{
    int data;
    struct node *next;
};
struct node *start=NULL;

void insert_at_first();
void print_list();

int main(){
    for(int i=1;i<=4;i++){
        insert_at_first();
    }
    print_list();
}

void insert_at_first(){
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

void print_list(){
    struct node *temp = start;
    while(temp!=NULL)
    {
        printf("%d->",temp->data);
        printf("%d ",temp->next);
        temp = temp->next;
    }   
}
