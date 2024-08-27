#include<stdio.h>
#include<stdlib.h>
#define max 10

int stack[max];

int top=-1;

void push();
void pop();
void display();

void push()
{
	if(top==max-1)
	{
	 printf("\nstack is overflow.\n");
	 return ;	
	}
	int val;
	printf("\nEnter the value :");
	scanf("%d",&val);
	top++;
	stack[top]=val;
}

void pop()
{
	if(top==-1)
	{
		printf("\nStack is empty .\n");
		return ;
	}
	printf("\nThe eliment %d is delete from the stack.\n",stack[top]);
	top--;
}

void display()
{
	int i;
    if(top==-1)
    {
    	printf("\nStack is empty .\n");
    	return ;
	} 
	printf("\n Stack eliments are : ");
	for(i=0;i<=top;i++)
	{
		printf("%d ",stack[i]);
	}
}

int main()
{
	int choice;
	while(1)
	{
	printf("\n1.Push eliment :\n2.Pop eliment :\n3.Display :\n4.EXIT:\n");
	printf("Enter choice : ");
	scanf("%d",&choice);
	
	switch(choice)
	{
		case 1 : push();
		         break;
	    case 2 : pop();
	             break;
	    case 3 : display();
	             break;
	    case 4 : printf("\nExit .");
	             return 0;
	    default : printf("\nWarning ! Enter a valid choice !");
	}
	}
return 0;
}

