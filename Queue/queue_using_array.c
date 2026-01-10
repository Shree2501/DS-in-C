#include <stdio.h>
int Q[5];
int front=-1,rear=-1;
int maxsize = 5;

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
                printf("Queue is : \n");
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
    printf("Enter value to insert: ");
    scanf("%d",&value);
    if (rear == maxsize-1)
    {
        printf("Queue is full");
    }
    else if (rear == -1){
        rear=front=0;
        Q[rear] = value;
    }
    else{
        rear += 1;
        Q[rear] = value;
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
        printf("\ndeleted element is: %d",Q[front]);        
        front = -1;
        rear = -1;
    }
    else{
        printf("\ndeleted element is: %d",Q[front]);        
        front += 1;
    }
}

void display(){
    for(int i=front;i<=rear;i++)
    {
        printf("%d",Q[i]);
    }
}
