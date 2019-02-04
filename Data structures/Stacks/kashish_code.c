#include<stdio.h>
#define CAPACITY 7
int top=-1;
int stack[CAPACITY];
void push(int);
int isFull();
int pop();
int isEmpty();
void display();
int main()
{
	int ch,e;
	while(1)
	{
		printf("1)insert\n");
		printf("2)delete\n");
		printf("3)display\n");
		printf("enter your choice:\n");
		scanf("%d",&ch);
		switch(ch)
		{
			case 1:printf("enter the element:\n");
			       scanf("%d",&e);
			       push(e);  
			       break;
			case 2:pop();
			break;
			case 3:display();
			break;
			default: printf("invalid input\n");
		}
	}
       return(0);
}
void push(int ele)
{
	if(isFull())
	{
		printf("stack is full\n");
	}
	else
	{
		top++;
		stack[top]=ele;
	}
}
int isFull()
{
	if(top==(CAPACITY-1))
	{
		return 1;
	}
	else
	{
		return 0;
	}
}
int pop()
{ 
	int ele;
	if(isEmpty())
	{
		printf("stack is empty\n");
	}
	else
	{
		ele=stack[top];
		top--;
	}
	return top;
}
int isEmpty()
{
	if(top==-1)
	{
		return 1;
	}
	else
	{
		return 0;
	}
}
void display()
{ 
	int i;
	if(isEmpty())
	{
		printf("stack is empty\n");
	}
	else
	{
		for(i=0;i<=top;i++)
		{
			printf("%d ",stack[i]);
		}
		printf("\n");
	}
}

