/* Write a function rotate(ar[], d, n) that rotates arr[] of size n by d elements. */

#include <stdio.h>
void rotateOneByOne(int * arr,int n)
{
	int temp=arr[0],i;
	for(i=0;i<n-1;i++)
		arr[i]=arr[i+1];
	arr[i]=temp;
}
void rotateLeft(int * arr,int n,int d)
{
	int i;
	for(i=0;i<d;i++)
	{
		rotateOneByOne(arr,n);
	}
}
int main()
{
	int i,arr[]={1,2,3,4,5,6,7};
	rotateLeft(arr,7,2);
	printf("After rotate\n");
	for(i=0;i<7;i++)
	{
		printf("%d ",arr[i]);
	}
	printf("\n");
}
