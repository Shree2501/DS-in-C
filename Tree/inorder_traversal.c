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
	newNode->data=value;
	newNode->Lchild=NULL;
	newNode->Rchild=NULL;
	return newNode;
}

void inorder(struct node* root){
    if(root == NULL){
        return;
    }
    inorder(root -> Lchild);
    printf("%d ",root -> data);
    inorder(root -> Rchild);
}

int main(){
    struct node* root=createnode(1);
    root->Lchild=createnode(2);
    root->Rchild=createnode(3);
	
	printf("\n Inorder of tree ");
	inorder(root);
}