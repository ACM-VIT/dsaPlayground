#include <stdio.h>
#include <stdlib.h>
struct queue{
	int que[5];
	int front;
	int rear;
};
typedef struct queue QUEUE;
QUEUE q;
void enqueue(void);
void dequeue (void);
void disp (void);
int main()
{
	int choice, opt=1;
	q.front=-1;
	q.rear=-1;
	while (opt==1)
	{
		printf("enter 1 to enqueue 2 to dequeue 3 to disp\n");
		scanf("%d",&choice);
		switch (choice)
		{
			case 1:
				enqueue();
				break;
			case 2:
				dequeue();
				break;
			case 3:
				disp();
				break;
			default:
				printf("invalid input\n");
		}
		printf("enter 1 to continue \n");
		scanf("%d",&opt);
	}
	return 0;	
}
void enqueue (void)
{
	if (q.rear==4)
	{
		printf("queue is full\n");
	}
	else
	{
		int a;
		printf("enter number\n");
		scanf("%d",&a);
		q.rear+=1;
		q.que[q.rear]=a;
		if (q.front==-1)
		q.front=0;
	}
}
void dequeue (void)
{
	if (q.front==-1)
	printf("queue is empty\n");
	else{
		printf("element popped : %d\n",q.que[q.front]);
		q.front+=1;
	}
}
void disp (void)
{
	if (q.rear==-1)
	printf("queue is empty\n");
	else
	{
		int i;
		for (i=0;i<=q.rear;i++)
		{
			printf("%d\n",q.que[i]);	
		}
	}
}
