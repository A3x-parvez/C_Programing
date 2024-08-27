#include<stdio.h>
#include<stdlib.h>

//Linklist declaration.
struct node
{
 int data;
 struct node *next;
};

//count function.
int count(struct node *head)
{
	int s=0;
	while(head!=NULL)
	{
	  head=head->next;
	  s++;
	}
	return s;
}

//display function.
void disp(struct node *temp)
{
	printf("\n\n");
  int i=1;
   while(temp!=NULL)
    {
 printf("The data %d is = %d\n",i,temp->data);
// printf("The memory adress is =%d\n",temp);
 temp=temp->next;
 i++;
  }
}
//main function 
int main()
{
printf("\033[1;32m");
int x[5],i;
//Input data from user.
for(i=0;i<5;i++)
{
 printf("Enter the num : ");
 scanf("%d",&x[i]);
}
//declaration linklist veriable.
struct node *a,*b,*c,*d,*e,*head;
//Allocate memory for each node.
a=(struct node *)malloc(sizeof(struct node));
b=(struct node *)malloc(sizeof(struct node));
c=(struct node *)malloc(sizeof(struct node));
d=(struct node *)malloc(sizeof(struct node));
e=(struct node *)malloc(sizeof(struct node));
//Assign the value to the linklist.
a->data=x[0];
b->data=x[1];
c->data=x[2];
d->data=x[3];
e->data=x[4];
//Connect the nodes.
a->next=b;
b->next=c;
c->next=d;
d->next=e;
e->next=NULL;
head=a;

//Function call by the main function.
disp(head);
int size=count(head);

printf("\n\nThe size is = %d",size);

return 0;
}
//Written by Parvez. date-07/09/2023
