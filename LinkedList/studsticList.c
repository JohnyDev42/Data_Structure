#include <stdio.h>
#include <stdlib.h>
typedef struct Stud{
	int ID;
	char name[10];
	int day;
	int month;
	int year;
}STU;
int main()
{
	int i;
	STU *s;
	s=(STU *)malloc(3*sizeof(STU));
	printf("Enter the name & DOB:\n");
	for(i=0;i<3;i++)
	{
		s[i].ID=i+1;
		scanf("%[^\n]s",s[i].name);
	//	fgets(s[i].name,10,stdin);
		scanf("%d%d%d",&s[i].day,&s[i].month,&s[i].year);
	}
	printf("List of Students:\n");
	for(i=0;i<3;i++)
	{
		printf("ID:%d Name:%s\t DOB:%d/%d/%d\n",s[i].ID,s[i].name,s[i].day,s[i].month,s[i].year);
	}
}
