#include<stdio.h>
#include<stdlib.h>

struct node
{
	int data;
	struct node *next;
};

struct node *top=NULL;

void push();
void pop();
void display();

void push()
{
	struct node *nw;
	int d;
	nw=(struct node*)malloc(sizeof(struct node));
	printf("Enter the value :");
	scanf("%d",&d);
	nw->data=d;
	nw->next=top;
	top=nw;
}

void pop()
{
   if(top==NULL)
   {
   	printf("Stack is empty.");
   	return ;
   }
   struct node *temp;
   temp=top;
   printf("\nThe %d value deleted.",temp->data);
   top=temp->next;
   free(temp);
}

void display()
{
	struct node *tem;
	tem=top;
	if(tem==NULL)
	{
		printf("\nStack is empty ./");
	}
	printf("\nThe stack eliments are :");
	while(tem!=NULL)
	{
		printf("%d ",tem->data);
		tem=tem->next;
	}
}

int main()
{
	int c;
while(1)
{
	printf("\n1.push:\n2.pop:\n3.display\n4.EXIT\n");
	printf("Enter choice : ");
	scanf("%d",&c);
  switch(c)
  {
  	case 1 : push();
  	        break;
  	case 2 : pop();
  	        break;
    case 3 : display();
            break;
    case 4 : printf("EXIT");
            return 0;
    default : printf("Enter a valid choice .");
  }
    }
}


