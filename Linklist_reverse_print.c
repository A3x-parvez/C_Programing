#include<stdio.h>
#include<stdlib.h>
struct node 
{
int data;
struct node *next;	
};

int count(struct node *head)
{
	int size=0;
  while(head!=NULL)
  {
  	head=head->next;
  	size++;
  }
  return size;
}
void datarev( struct node *head,int size)
{
	int n,i=0,a[10],b[10];
	struct node *temp;
	temp=head;
  for(i=0;i<size;i++)
  {
  	a[i]=temp->data;
  	temp=temp->next;
  }
  
for(i=0;i<=size;i++)
{
   b[size-1-i]=a[i];
}

for(i=0;i<size;i++)
{
	printf("\nThe first node is = %d",b[i]);
}
}

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
int size=count(head);
datarev(head,size);

return 0;
}


