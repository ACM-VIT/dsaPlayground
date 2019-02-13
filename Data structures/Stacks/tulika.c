#include<stdio.h>
int stack[10],top,size,choice,val,i,ch;
void push();
void pop();
void peek();
int isFull();
int isEmpty();
void display();
main()
{
top=-1;
printf("\n Enter the size of the Stack(maximum 10) : ");
scanf("%d",&size);
printf("\nPlease choose an operation from the following options for your stack : ");
do
{
printf("1.Push\n2.Pop\n3.Peek\n4.Display\n5.EXIT\n");
printf("\nEnter your choice : ");
scanf("%d",&choice);
switch(choice)
{
case 1:
{
push();
break;
}
case 2:
{
pop();
break;
}
case 3:
{
peek();
break;
}
case 4:
{
display();
break;
}
case 5:
{
printf("\n\tThank You!!");
break;
}
default:
{
printf("\n\tPlease Enter a Valid Choice!");
}}
}
while(choice!=5);
}
int isFull()
{
if(top>=size-1)
return 1;
else
return 0;
}
int isEmpty()
{
if(top<=-1)
return 1;
else
return 0;
}
void push()
{
if(isFull())
{
printf("\n\tSTACK OVERFLOW!!\n");
}
else
{
printf("Enter the value to be pushed :");
scanf("%d",&val);
top++;
stack[top]=val;
}
}
void pop()
{
if(isEmpty())
{
printf("\n\t STACK UNDERFLOW!!");
}
else
{
printf("The popped element is %d ",stack[top]);
top--;
}
}
void peek()
{
if(isEmpty())
{
printf("\nThe stack is EMPTY!!");
}
else
{
printf("The Element at top is: %d",stack[top]);
}
}
void display()
{
if(isEmpty())
{
printf("\nThe stack is EMPTY!!");
}
else
{
printf("\nThe elements in the stack are :\n");
for(i=top;i>=0;i--)
printf("\n%d\n",stack[i]);
}}


