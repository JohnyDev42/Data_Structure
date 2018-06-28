
#include<stdio.h>
#include<stdlib.h>
struct node 
{
	int data;
	struct node * next;
};
struct node* head;
struct node * tail;
void push(int data)
{
	struct node * new;
	new=(struct node *)malloc(sizeof(struct node));
	new->data=data;
	new->next=NULL;
	if(head==NULL)
	{
		head=new;
		tail=new;
		return;
	}
	tail->next=new;
	tail=tail->next;

}
void print()
{
	struct node * temp=head;
	while(temp!=NULL)
	{
		printf("%d ",temp->data);
		temp=temp->next;
	}
	printf("\n");
}
int main()
{
	head=NULL;
	push(1);
	push(2);
	push(3);
	print();
}
