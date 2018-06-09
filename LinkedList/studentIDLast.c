#include<stdio.h>
#include<stdlib.h>

struct Stud{
	int ID;
	struct Stud *next;
};
struct Stud *head;
//struct Stud *latest;
void insert(int x)
{
	struct Stud *latest;
	struct Stud *temp=(struct Stud *)malloc(sizeof(struct Stud));
	temp->ID=x;
//	temp->next=NULL;
	if(head==NULL)
	{
		head=temp;
		latest=temp;
	}
	else
	{
		latest->next=temp;
		latest=temp;
	}
	temp->next=NULL;

}
void print()
{
	struct Stud *temp=head;
	printf("List is:");
	while(temp!=NULL)
	{
		printf("%d ",temp->ID);
		temp=temp->next;
	}
	printf("\n");

}
int main()
{
	int i,x,n;
	head=NULL;
	printf("How many NUmbers:\n");
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		printf("Enter the NUmber:\n");
		scanf("%d",&x);
		insert(x);
		print();
	}
	print();
	
}
