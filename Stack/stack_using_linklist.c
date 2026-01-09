#include <stdio.h>
#include <stdlib.h>

struct node
{
    int data;
    struct node *next;
};
struct node *top=NULL;

void push();
void pop();
void print_stack();

int main()
{   int n;
    printf("Enter the size of stack: ");
    scanf("%d",&n);
    for(int i=0;i<n;i++){
        push();
    }
    printf("Before deletion\n");
    print_stack();
    pop();
    printf("\nAfter deletion\n");
    print_stack();
}

void push() {
    int value;
    printf("Enter value: ");
    scanf("%d", &value);

    struct node *p = (struct node*)malloc(sizeof(struct node));

    if(p == NULL) {
        printf("Stack Overflow\n");
    }
    else{
        p->data=value;
        p->next=top;
        top=p;
    }
}

void pop(){
    struct node *temp;
    if(top==NULL){
        printf("Stack Underflow");
    }
    else{
        temp=top;
        top=top->next;
        free(temp);
    }
}

void print_stack(){
    struct node *temp;
    if (top == NULL) {
        printf("Stack Empty\n");
    }
    else{
        temp=top;
        while(temp!=NULL){
            printf("%d ",temp->data);
            temp=temp->next;
        }
    }
}