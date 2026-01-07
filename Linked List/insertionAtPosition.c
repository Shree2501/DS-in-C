#include <stdio.h>
#include <stdlib.h>

struct node
{
    int data;
    struct node *next;
};
struct node *start=NULL;

void create_list();
void insert_at_pos(int pos);
void print_list();

int main(){
    for(int i=1;i<=4;i++){
        create_list();
    }
    printf("before insertion: \n");
    print_list();
    insert_at_pos(4);
    printf("after insertion: \n");
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

void insert_at_pos(int pos){
    int value;
    printf("\nEnter the value to insert: ");
    scanf("%d",&value);
    struct node *p = (struct node*)malloc(sizeof(struct node));
    struct node *temp = start;
    if(pos == 1){
        p->data=value;
        p->next=start;
        start=p;
    }
    else{
        for(int i=1;i<pos-1;i++){
            temp=temp->next;
        }
        p->data=value;
        p->next=temp->next;
        temp->next=p;
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
