#include<stdio.h>
#include<stdlib.h>
struct node
{
	int data;
	struct node *next;
	struct node *prev;
};
struct node *start=NULL,*last;
void create_list();
void print_list();

int main()
{
	for(int i=1; i<=5; i++)
	{
		create_list();
	}
	print_list();
	printf("\n%d",start);
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
        p->next=NULL;
        p->prev=NULL;
        start=p;
    }
    else{
        p->data=value;
        p->prev=NULL;
        p->next=start;
        start->prev=p;
        start=p;
    }
}
void print_list(){
    struct node *temp=start;
    while(temp!=NULL){
        printf("%d <- ",temp->prev);
		printf("%d ",temp->data);
		printf("-> %d\n",temp->next);
		temp=temp->next;
    }
}