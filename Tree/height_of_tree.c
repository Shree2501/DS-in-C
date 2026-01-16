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

int height(struct node* root){
    if(root == NULL){
        return 0;
    }
    int leftHeight = height(root -> Lchild);
    int rightHeight = height(root -> Rchild);
    if (leftHeight > rightHeight)
    {
        return 1 + leftHeight;
    }
    else{
        return 1 + rightHeight;
    }
}

int main(){
    struct node* root = createnode(1);
    root->Lchild=createnode(2);
    root->Rchild=createnode(3);
    root->Lchild->Lchild=createnode(4);
    root->Lchild->Rchild=createnode(5);
    root->Rchild->Lchild=createnode(6);
    printf("Height of the tree: %d",height(root));
    
}