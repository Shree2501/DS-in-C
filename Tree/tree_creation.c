#include <stdio.h>
#include <stdlib.h>

struct Node {
    int data;
    struct Node *left;
    struct Node *right;
}*tree;

struct Node* createNode(int data) {
    struct Node* newNode = (struct Node*)malloc(sizeof(struct Node));
    if (newNode == NULL) {
        printf("Memory allocation failed\n");
        exit(1);
    }
    else{
        newNode->data = data;
        newNode->left = NULL;
        newNode->right = NULL;
        return newNode;
    }
}

int main(){
    tree = createNode(1);
    tree->left = createNode(2);
    tree->right = createNode(3);
    tree->left->left = createNode(4);
    tree->left->right = createNode(5);

    printf("Root Node: %d\n", tree->data);
    printf("Left Child of Root: %d\n", tree->left->data);
    printf("Right Child of Root: %d\n", tree->right->data);
    printf("Left Child of Left Child: %d\n", tree->left->left->data);
    printf("Right Child of Left Child: %d\n", tree->left->right->data);

    return 0;
}