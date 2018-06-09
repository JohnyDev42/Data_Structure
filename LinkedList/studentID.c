#include<stdio.h>
#include<stdlib.h>
struct Stud{
	int ID;
	struct Stud *next;
};
int main()
{
	struct Stud *head=0,*node=0,*latest=0;
	int i=0;
	while(i<5)
	{
		node=(struct Stud *)malloc(sizeof(struct Stud));
		scanf("%d",&node->ID);
		node->next=NULL;
		if(head==NULL)
		{
			head=node;
			latest=node;
		}
		else
		{
			latest->next=node;
			latest=node;
		}
		i++;
	}
	printf("List of Student ID:\n");
	node=head;
	while(node!=NULL)
	{
		
		printf("%d ",node->ID);
		node=node->next;
	}
}
