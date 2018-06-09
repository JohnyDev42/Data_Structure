struct node *addatpos(struct node *head,int data,int pos)
{
	struct node *temp,*latest;
	int i;
	temp=start;
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
			start=laest;
		}
		else
		{
			latest->next=temp->next;
			temp->next=latest;
		}
	}
	return head;
}
