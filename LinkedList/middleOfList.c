#include<stdio.h>
#include<stdlib.h>
struct node{
	int data;
	struct node * next;
};
/* Insert Elements at Head */
void push(struct node **head_ref,int x)
{
	struct node *new_node;
	new_node=(struct node *)malloc(sizeof(struct node));
	new_node->data=x;
	new_node->next=*head_ref;
	(*head_ref)=new_node;
}
/* Function for printing the list */
void printlist(struct node *head_ref)
{
	struct node *temp;
	temp=head_ref;
	while(temp!=NULL)
	{
		printf("%d ",temp->data);
		temp=temp->next;
	}
	printf("\n");
}
/*For Printing the Middle of list */
void printMiddle(struct node *head_ref)
{
	int count=0;
	struct node *mid=head_ref;
	while(head_ref!=NULL)
	{
		if(count & 1)
			mid=mid->next;
		++count;
		head_ref=head_ref->next;
	}
	if(mid!=NULL)
	printf("Middle element is:%d\n",mid->data);
}
int main()
{
	int i,n,x;
	struct node *head=NULL;
	printf("Enter the size of List\n");
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		printf("Enter data:");
		scanf("%d",&x);
		push(&head,x);
		printlist(head);
		printMiddle(head);
	}	
}
