/* Program for finding loop in a Linked list  */

#include<stdio.h>
#include<stdlib.h>
struct node
{
	int data;
	struct node *next;
};
struct node *head;
void insert(int x)
{
	struct node *temp,*latest;
	temp=(struct node *)malloc(sizeof(struct node));
	temp->data=x;
	latest=head;
	if(head==NULL){
		head=temp;
		head->next=NULL;
		return;
	}
	while(latest->next!=NULL)
		latest=latest->next;
	latest->next=temp;
	temp->next=NULL;
	
}
void printlist()
{
	struct node *temp=head;
	while(temp!=NULL)
	{
		printf("%d ",temp->data);
		temp=temp->next;
	}
	printf("\n");
}
int main()
{
	int x,i,n;
	head=NULL;
	printf("Enter the list size");
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		printf("Enter the element:");
		scanf("%d",&x);
		insert(x);
	}
	
	printlist();
}
