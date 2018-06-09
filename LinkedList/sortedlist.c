/* Implement a List using LinkedList & insert at Beginning*/
#include<stdlib.h>
#include<stdio.h>
struct Node
{
	int data;
	struct Node* next;
};
struct Node *head=NULL;
void  insert(int x)
{
	struct Node *temp=head;
	struct Node *prev=NULL;
	struct Node *ptr;
	ptr=(struct Node *)malloc(sizeof(struct Node));
	ptr->data=x;
	ptr->next=NULL;
	if(temp==NULL)    //List is Empty....
	{
		ptr->next=NULL;
		head=ptr;
		return;
	}
	if(x<temp->data)   //Add to Beginning
	{
		ptr->next=head;
		head=ptr;
		return;
	}
	else
	{
		while(temp!=NULL)    
		{
			if(x>temp->data)  //Traverse to position
			{
				prev=temp;
				temp=temp->next;
				continue;
			}
			else		//Add to sorted psition
			{
				prev->next=ptr;
				ptr->next=temp;
				return; 
			}
		}
		   prev->next=ptr;     //Add to End
	}
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
	struct Node *head=NULL;
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
