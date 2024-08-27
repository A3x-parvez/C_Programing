#include<stdio.h>
#define max 10

int queue[max];

int front=-1;
int rare=-1;

void enqueue();
void dequeue();
void display();

void enqueue()
{
	int val;
	if(rare==max-1)
	{
		printf("\nQueue is full.");
		return ;
	}
	printf("\nEnter the value :");
	scanf("%d",&val);
	rare++;
	queue[rare]=val;
	if(front==-1)
	{
		front=rare;
	}
}

void dequeue()
{
	if(front==-1)
	{
		printf("\nQueue is empty.");
		return ;
	}
	
	if(front>rare)
	{
		front=rare=-1;
	}
	
	printf("\nThe value %d is deleted from the queue.\n",queue[front]);
	front++;
}

void display()
{
    int i;
	if(rare==-1)
	{
		printf("\nThe queue is empty.\n");
		return ;
	}
	
	printf("\nThe queue eliments are : ");
	for(i=front;i<=rare;i++)
	{
	  printf("%d ",queue[i]);	
	}	
}

int main()
{
	int choice;
	while(1)
	{
	printf("\n1.Enter eliment :\n2.Delete eliment :\n3.Display :\n4.EXIT:\n");
	printf("Enter choice : ");
	scanf("%d",&choice);
	
	switch(choice)
	{
		case 1 : enqueue();
		         break;
	    case 2 : dequeue();
	             break;
	    case 3 : display();
	             break;
	    case 4 : printf("\nExit .");
	             return 0;
	    default : printf("\nWarning ! Enter a valid choice !");
	}
	}

}

