#include <stdio.h>
int size = 5;
int Queue[5];
int rear=-1;
int front=-1;

void enqueue();
void dequeue();
void display();

int main()
{
    int c;
    while(1)
    {
        printf("\nEnter your choice : \n");
        printf("1.Enqueue\n");
        printf("2.Dequeue\n");
        printf("3.display\n");
        printf("4.Exit\n");
        scanf("%d",&c);
        switch(c)
        {
            case 1:
                enqueue();
                break;
            case 2:
                dequeue();
                break;
            case 3:
                printf("\nQueue is : \n");
                display();
                break;
            case 4:
                printf("Exited sucessfully");
                return 0;
            default:
                printf("Please enter a valid choice");
        }
    }
}

void enqueue()
{
    int value;
    printf("\nEnter value to insert: ");
    scanf("%d",&value);
    if (rear+1 % size == front)
    {
        printf("Queue is full");
    }
    else if (front == -1){
        front = rear = 0;
        Queue[rear] = value;
    }
    else{
        rear = (rear + 1) % size;
        Queue[rear] = value;
    }
}

void dequeue()
{
    if(front == -1)
    {
        printf("Empty Queue");
    }
    else if(front == rear)
    {
        printf("\ndeleted element is: %d",Queue[front]);        
        front = -1;
        rear = -1;
    }
    else{
        printf("\ndeleted element is: %d",Queue[front]);        
        front = (front + 1) % size;
    }
}

void display(){
    if (front == -1) {
        printf("Queue Empty\n");
        return;
    }
    int i=front;
    while(1)
    {
        printf("%d",Queue[i]);
        if ( i == rear)
            break;
        i = (i + 1) % size;
    }
}