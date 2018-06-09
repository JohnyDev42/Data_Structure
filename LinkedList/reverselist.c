#include<stdio.h>
#include<stdlib.h>
//#include "linkedlist.h"
struct node{
	int ID;
	struct node *next;
};
//struct node *head;
void printlist(struct node *head);
struct node * createlist(struct node *head,int data);
struct node * reverselist(struct node *head);
int main()
{
	int i=0,n,x;
	struct node *head=NULL;
	printf("How many numbers:");
	scanf("%d",&n);
	while(i<n)
	{
		printf("Enter number:");
		scanf("%d",&x);
		head=createlist(head,x);
		i++;
	}
	printlist(head);
	head=reverselist(head);
	printf("\nReverseList\n");
	printlist(head);
}
struct node * createlist(struct node *head,int data)
{
	struct node *p,*temp;
	temp=(struct node *)malloc(sizeof(struct node));
	temp->ID=data;
	p=head;
	if(head==NULL)
	{
		head=temp;
		head->next=NULL;
		return head;
	}
	while(p->next!=NULL)
		p=p->next;
	p->next=temp;
	temp->next=NULL;
	return head;
}
void printlist(struct node *head)
{
	struct node *temp=head;
	while(temp!=NULL)
	{
		printf("%d ",temp->ID);
		temp=temp->next;
	}
}
struct node * reverselist(struct node *head)
{
	struct node *p,*c,*n;
	p=c=n=head;
	c=c->next;
	n=c->next;
	while(c!=NULL)
	{
		c->next=p;
		p=c;
		c=n;
		if(n!=NULL)
			n=n->next;
	}
		head->next=NULL;
		head=p;
	
}
	
