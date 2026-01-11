#include <stdio.h>
#include <stdlib.h>

struct node {
    int data;
    struct node *next;
};

struct node *front = NULL;
struct node *rear = NULL;

void enqueue();
void dequeue();
void display();

int main() {
    for(int i = 0; i < 5; i++) {
        enqueue();
    }
    printf("Before deletion:\n");
    display();

    dequeue();
    printf("After deletion:\n");
    display();
}

void enqueue() {
    int value;
    printf("Enter value to insert: ");
    scanf("%d", &value);

    struct node *newNode = (struct node*)malloc(sizeof(struct node));
    newNode->data = value;

    if(front == NULL) {
        front = rear = newNode;
        rear->next = front;
        
    } else {
        rear->next = newNode;
        rear = newNode;
        rear->next = front;
    }
}

void dequeue() {
    struct node *temp = front;
    if(front == NULL) {
        printf("Queue Underflow\n");
        return;
    }
    else if(front == rear){
        free(temp);
        front = rear = NULL;
    }
    else{
        front = front->next;
        rear->next = front;
        free(temp);
    }
}

void display() {
    struct node *temp = front;

    if(temp == NULL) {
        printf("Queue is empty\n");
        return;
    }

    do {
        printf("%d ", temp->data);
        temp = temp->next;
    } while (temp != front);
    printf("\n");
}
