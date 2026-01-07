#include<stdio.h>
#include<stdlib.h>
struct node
{
	int data;
	struct node *next;
};
struct node *start=NULL;
void insert_at_first();
void print_list();
void deletion_at_first();
int main()
{
	for(int i=1; i<=5; i++)
	{
		insert_at_first();
	}
    printf("Link list Before deletion\n");
	print_list();
    
	deletion_at_first();
    printf("Link list after deletion\n");
	print_list();
}
void insert_at_first()
{
	int value;
	printf("Enter value of link list: ");
	scanf("%d",&value);
	struct node *p =(struct node*)malloc(sizeof(struct node));
	if (p==NULL){
        printf("list is full");
    }
    else if(start == NULL){
        p->data = value;
        p->next = NULL;
        start = p;
    }
    else{
        p->data = value;
        p->next = start;
        start = p;
    }
}
	
void print_list()
{
	struct node *temp=start;
	while(temp!=NULL)
	{
		printf("%d ",temp->data);
		printf("%d\n",temp->next);
		temp = temp->next;
	}
}
void deletion_at_first()
{
	struct node *temp;
	if(start==NULL)
	{
		printf("Link list is empty");
	}
	else if(start->next == NULL){
		temp = start;
		start = NULL;
		free(temp);
	}
	else{
		temp=start;
		start=start->next;
		free(temp);
	}
}
