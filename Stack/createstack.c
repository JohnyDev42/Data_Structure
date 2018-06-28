/* Create a Stack using Array Implemantation */

#include<stdio.h>
#include<stdlib.h>

struct Stack
{
	unsigned capacity;
	int top;
	int *array;
};
struct Stack * createStack(unsigned capacity)
{
	struct Stack *stack=(struct Stack *)malloc(sizeof(struct Stack));
	stack->capacity=capacity;
	stack->top=-1;
	stack->array=(int *)malloc(stack->capacity*(sizeof(int)));
	return stack;
}
int isFull(struct Stack * stack)
{
	return stack->capacity -1 == stack->top;
}
int isEmpty(struct Stack * stack)
{
	return stack->top== -1;
}
void push(struct Stack * stack,int item)
{
	if(isFull(stack))
	{
		printf("Stack is Full\n");
		return;
	}
	stack->array[++stack->top]=item;
	printf("%d is Pushed to stack\n",item);
}
int pop(struct Stack * stack)
{
	if(isEmpty(stack))
	{
		printf("Stack is Empty\n");
		return -1;
	}
	return stack->array[stack->top--];
}

int main()
{
	struct Stack * stack =createStack(5);
	push(stack,10);
	push(stack,20);
	push(stack,30);
	push(stack,40);
	push(stack,50);
	push(stack,60);
	printf("%d is poped from stack\n",pop(stack));

}
