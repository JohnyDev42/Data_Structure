#include<stdio.h>
#include<stdlib.h>
//#include "linkedlist.h"
struct node{
	int ID;
	struct node *next;
};
//struct node *head;
void printlist(struct node *head);
struct node *addatpos(struct node *head,int data,int pos);
struct node *addatbeg(struct node *head,int data);
struct node * createlist(struct node *head,int data);
struct node *deletenode(struct node *head,int data);
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
	printf("\nadded 5 at position 3\n");
	addatpos(head,5,3);
	printlist(head);
	printf("\nAdded 10 at End\n");
	createlist(head,10);
	printlist(head);
	printf("\nAdded at 21 at Beginning\n");
	head=addatbeg(head,21);
	printlist(head);
	printf("\nDelete 5\n");
	deletenode(head,5);
	printlist(head);
	printf("\nDelete 21 & 10\n");
	head=deletenode(head,21);
	deletenode(head,10);
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
struct node *addatpos(struct node *head,int data,int pos)
{
	struct node *temp,*latest;
	int i;
	temp=head;
	for(i=1;i<pos-1&&temp!=NULL;i++)
		temp=temp->next;
	if(temp==NULL)
		printf("There is no such Position\n");
	else
	{
		latest=(struct node *)malloc(sizeof(struct node));
		latest->ID=data;
		if(pos==1)
		{
			latest->next=head;
			head=latest;
		}
		else
		{
			latest->next=temp->next;
			temp->next=latest;
		}
	}
	return head;
}
struct node *addatbeg(struct node *head,int data)
{
	struct node *temp;
	temp=(struct node *)malloc(sizeof(struct node));
	temp->ID=data;
	temp->next=head;
	head=temp;
	return head;
}
struct node *deletenode(struct node *head,int data)
{
	struct node *c,*p;
	c=p=head;

	if(c->ID==data)
	{
		head=c->next;
		free(c);

	}
	else
	{
		c=c->next;
		while((c->ID!=data)&&(c!=NULL))
		{
			c=c->next;
			p=p->next;
		}
		if(c==NULL)
			printf("Item not found\n");
		else
		{
			p->next=c->next;
			free(c);
		}
	}
	return head;
}
