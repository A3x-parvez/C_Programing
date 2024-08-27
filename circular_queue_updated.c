#include<stdio.h>
#define N 5
int front = -1;
int rare = -1;
int queue[N];

void enter()
{
	if((rare+1)%N==front)
	{
		printf("Queue is full.");
		return ;
	}
   else if(front==-1 && rare==-1)
	{
		front=rare=0;
	}
	else
	{
		rare=(rare+1)%N;
	}
	printf("Enter value : ");
	scanf("%d",&queue[rare]);
}

void delet()
{
	if(front==-1 && rare ==-1)
	{
		printf("queue is empty.");
		return ;
	}
	if(front==rare)
	{
		printf("The value %d delete.",queue[front]);
		front=rare=-1;
	}
	printf("The value %d deleted.",queue[front]);
	front=(front+1)%N;
}

void display()
{
	if(front ==-1 && rare ==-1)
	{
		printf("queue is empty.");
		return ;
	}
	int i=front;
	printf("The values are = ");
	do
	{
		printf("%d \t",queue[i]);
		i=(i+1)%N;
	}while(i!=(rare+1)%N);
}


int main()
{
	int choice;
	while(1)
	{
	printf("\n1.Enter:\n2.Delete:\n3.Display:\n4.Exit:\n");
	printf("Enter choice :");
	scanf("%d",&choice);
	switch(choice)
	{
		case 1 : enter();
		           break;
		case 2 : delet();
		           break;
	    case 3 : display();
	              break;
	    case 4 : printf("Exit.");
	             return 0;
	    default : printf("Enter a valid choice .");
	}
	}
}
