/* Implement a List using LinkedList & insert at Beginning*/
#include<stdlib.h>
#include<stdio.h>
struct Node
{
	int data;
	struct Node* next;
};
void delete();
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
	printf("Stack Size?\n");
	scanf("%d",&n);
	while(n)
	delete();
	print();
}
void delete()
{
	struct Node* node;
	node=head->next;
	free(head);
	head=node;
}
