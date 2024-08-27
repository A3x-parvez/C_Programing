#include<stdio.h>
#include<stdlib.h>
struct node
{
	int data;
	struct node *next;
};

void add_at_begin(struct node *head)
{
	struct node *nw,*temp;
	temp=head;
	nw=(struct node *)malloc(sizeof(struct node));
	int num;
	printf("Enter the number :");
	scanf("%d",&num);
	
	nw->data=num;
	nw->next=head;
	head=nw;
}

//display function.
void disp(struct node *temp)
{
  int i=1;
   while(temp!=NULL)
    {
 printf("The data %d is = %d\n",i,temp->data);
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
add_at_begin(head);
disp(head);

return 0;
}
