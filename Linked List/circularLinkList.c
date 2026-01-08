#include<stdio.h>
#include<stdlib.h>
struct node
{
	int data;
	struct node *next;
};
struct node *start=NULL;
struct node *temp;

void create_list();
void print_list();

int main()
{
	for(int i=1; i<=5; i++)
	{
		create_list();
	}
	print_list();
	printf("\nStart pointer: %d\n",start);
	return 0;
}
void create_list()
{
	int value;
	printf("Enter value of link list: ");
	scanf("%d",&value);
	struct node *p =(struct node*)malloc(sizeof(struct node));
	if(p==NULL)
	{
		printf("Link list is full");
	}
	else if(start==NULL){
        p->data=value;
        p->next=p;
        start=p;
        temp=p;
    }
    else{
        p->data=value;
        p->next=start;
        start=p;
        temp->next=start;
    }
}
void print_list(){
	struct node *ptr=start;
	do{
		printf("%d ",ptr->data);
		printf("-> %d\n",ptr->next);
		ptr=ptr->next;
	}while(ptr!=start);
}