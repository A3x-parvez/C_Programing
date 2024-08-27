#include<stdio.h>
#include<stdlib.h>

struct node
{
	int data;
	struct node *next;
};

struct node *front=NULL;
struct node *rare=NULL;

void inseart();
void delet();
void display();

void inseart()
{
	struct node *nw;
	int val;
	nw=(struct node *)malloc(sizeof(struct node));
	printf("Enter the value : ");
	scanf("%d",&val);
	nw->data=val;
	if(rare==NULL)
	{
	nw->next=NULL;                                   
	rare=front=nw;
    }
	else
	{
	nw->next=NULL;
	rare->next=nw;
	rare=nw;	
	}
}

void delet()
{
	if(front==NULL )
	{
		printf("\nQueue is empty.\n");
		return ;
	}
	struct node *temp;
	temp=front;
	front=temp->next;
	free(temp);
}

void display()
{
	struct node *end;
	end=front;
	while(end!=NULL)
	{
		printf("%d ",end->data);
		end=end->next;
	}
	
}

int main()
{
	int c;
while(1)
{
	printf("\n1.Inseart:\n2.Delete:\n3.Display\n4.EXIT\n");
	printf("Enter choice : ");
	scanf("%d",&c);
  switch(c)
  {
  	case 1 : inseart();
  	        break;
  	case 2 : delet();
  	        break;
    case 3 : display();
            break;
    case 4 : printf("EXIT");
            return 0;
    default : printf("Enter a valid choice .");
  }
    }
}

