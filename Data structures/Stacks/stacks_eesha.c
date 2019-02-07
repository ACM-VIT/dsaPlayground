#include<stdio.h>
int stack[100],n,top=-1;

int isFull(); //check for stack overflow
int isEmpty(); //check for stack underflow
void push(); //push element onto stack
int pop(); //pop element from stack
void peek(); //print top element
void display(); //print stack

void main()
{printf("n= ");
 scanf("%d",&n);
 int ch=-1;
 while(ch!=5)
 {printf("\n1.Push\n2.Pop\n3.Peek\n4.Display\n5.Exit\n>");
  scanf("%d",&ch);
  switch(ch)
  {case 1:push(); break;
   case 2:printf("Deleted = %d",pop());break;
   case 3:peek(); break;
   case 4:display(); break;
   case 5:break;
   default:printf("Invalid choice.");break;
  }
 }
}
int isFull()
{if(top==n-1)
return 1;
return 0;
}
int isEmpty()
{if(top==-1)
return 1;
return 0;
}
void push()
{if(isFull()==1)
 printf("Stack Overflow");
 else
 {top++;
  printf("Element= ");
  scanf("%d",&stack[top]);
 }
}
int pop()
{if(isEmpty()==1)
 printf("Stack Underflow");
 else
 {int p=stack[top];
  top--;
  return p;
 }
}
void peek()
{if(isEmpty()==1)
 printf("Stack Underflow");
 else
printf("Top= %d",stack[top]);}

void display()
{if(isEmpty())
 printf("Stack Underflow");
 else
 {printf("\n%d ==>top\n",stack[top]);
 int i;
 for(i=top-1;i>=0;i--)
  printf("%d\n",stack[i]);
}
}

