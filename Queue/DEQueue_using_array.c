#include <stdio.h>

int DEQueue[5];
int size = 5;
int front = -1;
int rear = -1;

void insertFront(int value);
void deleteFront();
void insertRear(int value);
void deleteRear();
void display();

void insertFront(int value) {
    if (front == 0) {
        printf("Cannot insert at front\n");
        return;
    }

    if (front == -1) {
        front = rear = 0;
    } else {
        front--;
    }
    DEQueue[front] = value;
}

void insertRear(int value) {
    if (rear == size - 1) {
        printf("Deque is full\n");
        return;
    }

    if (rear == -1) {
        front = rear = 0;
    } else {
        rear++;
    }
    DEQueue[rear] = value;
}

void deleteFront() {
    if (front == -1) {
        printf("Deque is empty\n");
        return;
    }

    printf("Deleted: %d\n", DEQueue[front]);

    if (front == rear) {
        front = rear = -1;
    } else {
        front++;
    }
}

void deleteRear() {
    if (rear == -1) {
        printf("Deque is empty\n");
        return;
    }

    printf("Deleted: %d\n", DEQueue[rear]);

    if (front == rear) {
        front = rear = -1;
    } else {
        rear--;
    }
}

void display() {
    if (front == -1) {
        printf("Deque is EMPTY\n");
        return;
    }

    printf("Deque elements: ");
    for (int i = front; i <= rear; i++) {
        printf("%d ", DEQueue[i]);
    }
    printf("\n");
}

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
