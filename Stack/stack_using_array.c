#include<stdio.h>

int stack[5];
int top = -1;
int maxsize=5;

void push(){
    int value;
	printf("Enter the value : ");
	scanf("%d",&value);
    if(top == maxsize-1){
        printf("Stack is full\n");
    }
    else{
        top=top+1;
        stack[top]=value;
    }
}

void pop(){
    if(top==-1){
        printf("Stack is empty\n");
    }
    else{
        top=top-1;
    }
}

void print_stack() {
	if(top==-1) {
		printf("Empty");
	}
    else{
        for(int i=0;i<=top;i++){
            printf("%d",stack[i]);
        }
    }
}

int main(){
    for(int i=0;i<maxsize;i++){
        push();
    }
    printf("Before deletion\n");
    print_stack();
    pop();
    printf("\nAfter deletion\n");
    print_stack();
}