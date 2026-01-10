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
    newNode->next = NULL;

    if(front == NULL) {
        front = rear = newNode;
    } else {
        rear->next = newNode;
        rear = newNode;
    }
}

void dequeue() {
    if(front == NULL) {
        printf("Queue Underflow\n");
        return;
    }

    struct node *temp = front;
    front = front->next;
    free(temp);

    if(front == NULL) {
        rear = NULL;
    }
}

void display() {
    struct node *temp = front;

    if(temp == NULL) {
        printf("Queue is empty\n");
        return;
    }

    while(temp != NULL) {
        printf("%d ", temp->data);
        temp = temp->next;
    }
    printf("\n");
}
