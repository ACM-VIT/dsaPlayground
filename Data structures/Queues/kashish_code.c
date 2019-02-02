#include<stdio.h>
#define CAPACITY 7
int queue[CAPACITY];
int front=0;
int rear=0;
void enqueue(int);
int dequeue();
void display();
void main()
{ int ch,e;
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
       enqueue(e);  
       break;
case 2:dequeue();
break;
case 3:display();
break;
default: printf("invalid input\n");
}
}
}
void enqueue(int ele)
{
if(CAPACITY==rear)
{printf("queue is full\n");}
else
{
queue[rear]=ele;
rear++;
}
}
int dequeue()
{ int i;
if(rear==front)
{printf("queue is empty\n");}
else
{for(i=0;i<rear-1;i++)
{
queue[i]=queue[i+1];
}
rear--;}
}
void display()
{ int i;
if(rear==front)
{printf("queue is empty\n");}
else
{
for(i=0;i<=rear;i++)
{
printf("%d\n",queue[i]);
}
}
}
