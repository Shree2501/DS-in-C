#include <stdio.h>
#include <stdlib.h>
struct node {
	int data;
	struct node *Lchild;
	struct node *Rchild;
}*tree;

struct node *createnode(int value)
{
    struct node *newNode = (struct node*)malloc(sizeof(struct node));
    newNode -> data = value;
    newNode -> Lchild = NULL;
    newNode -> Rchild = NULL;
    return newNode;
}

int countNode(struct node* root){
    if(root == NULL){
        return 0;
    }
    return 1 + countNode(root -> Lchild) + countNode(root -> Rchild);
}

int main(){
    struct node* root = createnode(1);
    root->Lchild=createnode(2);
    root->Rchild=createnode(3);
    root->Lchild->Lchild=createnode(4);
    root->Lchild->Rchild=createnode(5);
    root->Rchild->Lchild=createnode(6);
    printf("Number of nodes : %d",countNode(root));
    
}