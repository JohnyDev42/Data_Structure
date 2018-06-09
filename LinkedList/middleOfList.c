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
void printlist(struct node **head_ref)
{
	struct node *temp;
	temp=*head_ref;
	while(temp!=NULL)
	{
		printf("%d ",temp->data);
		temp=temp->next;
	}
	printf("\n");
}
/*For Printing the Middle of list */
void printMiddle(struct node **head_ref)
{
	struct node *slow_ptr,*fast_ptr;   	
	/* Take two pointers slow & fast,Move slow for 1step and fast with 2 steps, So when fast ptr is at last element slow ptr will be\
	 * at middle of list */
	slow_ptr=fast_ptr=*head_ref;
	while((fast_ptr!=NULL)&&(fast_ptr->next!=NULL)) //Check for fast ptr reached at last node
	{
		slow_ptr=slow_ptr->next;		//Moving slow ptr one step
		fast_ptr=fast_ptr->next->next;		//movin fast ptr two steps
	}
	printf("Middle element is:%d\n",slow_ptr->data);
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
		printlist(&head);
		printMiddle(&head);
	}	
}
