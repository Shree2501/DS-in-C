#include <stdio.h>
#include <stdlib.h>
struct node
{
    int data;
    struct node *next;
};
struct node *start=NULL;

void create_list();
void delete_at_pos(int pos);
void print_list();

int main(){
    for(int i=1;i<=4;i++){
        create_list();
    }
    printf("before deletion: \n");
    print_list();
    delete_at_pos(2);
    printf("after deletion: \n");
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

void delete_at_pos(int pos){
    struct node *temp = start;
    struct node *prev = NULL;
    if(start == NULL){
        printf("List is empty\n");
        return;
    }
    if(pos == 1){
        start=start->next;
        free(temp);
    }
    else{
        for(int i=1;i<pos;i++){
            prev=temp;
            temp=temp->next;
        }
        prev->next=temp->next;
        free(temp);
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