/* Implement a List using LinkedList & insert at Beginning*/
#include<stdlib.h>
#include<stdio.h>
struct Node
{
	int data;
	struct Node* next;
};
struct Node* head;
void insert(int x)
{
	struct Node *temp=(struct Node*)malloc(sizeof(struct Node));
	temp->data=x;
	temp->next=head;
	head=temp;
}
void print()
{
	struct Node* temp=head;
	printf("List is: ");
	while(temp!=NULL)
	{
		printf("%d ",temp->data);
		temp=temp->next;
	}
	printf("\n");
}
int main()
{
	int i,n,x;
	head=NULL;
	printf("How many Numbers?\n");
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		printf("Enter the Number:\n");
		scanf("%d",&x);
		insert(x);
		print();
	}
}
