#include <stdio.h>
#include <stdlib.h>

struct Node {
    int data;
    struct Node *prev;
    struct Node *next;
};

struct Node *front = NULL;
struct Node *rear = NULL;

void insertFront(int value);
void deleteFront();
void insertRear(int value);
void deleteRear();
void display();

int main() {
    insertFront(5);
    display();

    insertRear(10);
    display();

    insertRear(20);
    display();

    deleteFront();
    display();

    deleteRear();
    display();

    return 0;
}

void insertFront(int value) {
    struct Node *newNode = (struct Node *)malloc(sizeof(struct Node));
    newNode->data = value;
    newNode->prev = NULL;
    newNode->next = front;

    if (front == NULL) {
        rear = newNode;
    } else {
        front->prev = newNode;
    }
    front = newNode;
}

void insertRear(int value) {
    struct Node *newNode = (struct Node *)malloc(sizeof(struct Node));
    newNode->data = value;
    newNode->next = NULL;
    newNode->prev = rear;

    if (rear == NULL) {
        front = newNode;
    } else {
        rear->next = newNode;
    }
    rear = newNode;
}

void deleteFront() {
    if (front == NULL) {
        printf("Deque is empty\n");
        return;
    }

    struct Node *temp = front;
    printf("Deleted element: %d\n", temp->data);

    front = front->next;

    if (front == NULL) {
        rear = NULL;
    } else {
        front->prev = NULL;
    }

    free(temp);
}

void deleteRear() {
    if (rear == NULL) {
        printf("Deque is empty\n");
        return;
    }

    struct Node *temp = rear;
    printf("Deleted element: %d\n", temp->data);

    rear = rear->prev;

    if (rear == NULL) {
        front = NULL;
    } else {
        rear->next = NULL;
    }

    free(temp);
}

void display() {
    if (front == NULL) {
        printf("Deque is empty\n");
        return;
    }

    struct Node *temp = front;
    printf("DEqueue is : ");
    while (temp != NULL) {
        printf("%d ", temp->data);
        temp = temp->next;
    }
    printf("\n");
}
