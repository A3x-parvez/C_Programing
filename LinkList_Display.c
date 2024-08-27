#include<stdio.h>
#include<stdlib.h>
struct node
{
int data;
struct node *next;	
};

void display( struct node *head);
struct node *addbeg( struct node *head);

int main()
{
	struct node *head,*a,*b,*c,*d;
	a=(struct node*)malloc(sizeof(struct node));
	b=(struct node*)malloc(sizeof(struct node));
	c=(struct node*)malloc(sizeof(struct node));
	d=(struct node*)malloc(sizeof(struct node));
	
	a->data=10;
	b->data=20;
	c->data=30;
	d->data=40;
	
	a->next=b;
	b->next=c;
	c->next=d;
	d->next= NULL;
	
	head=a;
	head=addbeg(head);
	head=addbeg(head);
display(head);

return 0;
}

 void display( struct node *head)
{
	int i=0;
   for(i=0;head!=NULL;i++)
   {
  	printf("The %d node value is = %d \n",i+1,head->data);
  	head=head->next;
  }
}

struct node *addbeg( struct node *head)
{
	struct node *new;
	int num;
	new=(struct node *)malloc(sizeof(struct node));
	printf("Enter the number :");
	scanf("%d",&num);
	new->data=num;
	new->next=head;
	head=new;
	return head;
}






