#include <stdio.h>
#include <stdlib.h>

struct Node {
    int data;
    struct Node* left;
    struct Node* right;
};

struct Node* createNode(int value){
    struct Node* newNode = (struct Node*)malloc(sizeof(struct Node));
    newNode->data = value;
    newNode->left = NULL;
    newNode->right = NULL;
    return newNode;
}

struct Node* insertNode(struct Node* root, int value) {
    if (root == NULL)
        return createNode(value);

    if (value < root->data)
        root->left = insertNode(root->left, value);
    else if (value > root->data)
        root->right = insertNode(root->right, value);
    return root;
}

struct Node* minNode(struct Node* root){
    if (root == NULL)
    return NULL;
    while (root->left != NULL)
        root = root->left;
    return root;
}

struct Node* deleteNode(struct Node* root,int value){
    if(root == NULL){
        return root;
    }
    if (value < root->data)
        root->left = deleteNode(root->left, value);
    else if (value > root->data)
        root->right = deleteNode(root->right, value);
    else{
        if(root -> left == NULL){
            struct Node *temp  = root -> right;
            free(root);
            return temp;
        }
        else if (root->right == NULL) {
            struct Node* temp = root->left;
            free(root);
            return temp;
        }
        struct Node *temp = minNode(root -> right);
        root -> data = temp -> data;
        root -> right = deleteNode(root -> right,temp->data);
    }
    return root;
}

void display(struct Node* root){
    if(root != NULL){
        display(root -> left);
        printf("%d ",root -> data);
        display(root -> right);
    }
}

int main(){
    struct Node* root = NULL;
    root = insertNode(root, 50);
    insertNode(root, 30);
    insertNode(root, 20);
    insertNode(root, 40);
    insertNode(root, 70);
    insertNode(root, 60);
    insertNode(root, 80);

    printf("Inorder traversal:\n");
    display(root);

    printf("\n\nDeleting 20\n");
    root = deleteNode(root, 20);
    display(root);

    printf("\n\nDeleting 30\n");
    root = deleteNode(root, 30);
    display(root);

    printf("\n\nDeleting 50\n");
    root = deleteNode(root, 50);
    display(root);

    return 0;
}