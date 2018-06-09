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
void reverseprint(struct node *head);
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
	printf("\nReverseList\n");
	reverseprint(head);
//	printlist(head);
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
void reverseprint(struct node *head)
{
	struct node *Node=head;
	if(Node==NULL)
		return;
	reverseprint(Node->next);
	printf("%d ",Node->ID);	
}
	
