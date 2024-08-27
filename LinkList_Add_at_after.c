#include<stdio.h>
#include<stdlib.h>

struct node
{
  int data;
  struct node *next;
};

void add_at_after(struct node* head)
{
	int i,num,pos;
	struct node *temp,*nw;
	temp=head;
	printf("\n\nEnter the position after which you want to inseart a new node :");
	scanf("%d",&pos);
	
	for(i=1;i<pos;i++)
	{
		temp=temp->next;
    }
		if(temp==NULL)
		{
			printf("\nThere are less then %d node exist. \nSo,unable to add new node...",pos);
		}
		else
		{
        	printf("\nEnter the value : ");
	        scanf("%d",&num);
	        nw=(struct node *)malloc(sizeof(struct node));
        	nw->data=num;
	        nw->next=temp->next;
        	temp->next=nw;
        }
	
}

void display(struct node *head)
{
	struct node *temp;
	temp=head;
 int i=1;
 printf("\n\nThe data are : \n");
 while(temp!=NULL)
 {
 	printf("\nThe %d node data is = %d ",i,temp->data);
 	temp=temp->next;
 	i++;
 }	
}


int main()
{
	struct node *head,*a[10];
	int val[10],n,i;
	printf("\nEnter the range : ");
	scanf("%d",&n);
	printf("\nEnter the data :\n");
	for(i=0;i<n;i++)
	{
	   printf("Enter the %d eliment :",i+1);
	   scanf("%d",&val[i]);
	}
	
	for(i=0;i<n;i++)
	{
	   a[i]=(struct node *)malloc(sizeof(struct node));
	}
	
	for(i=0;i<n;i++)
	{
		a[i]->data=val[i];
	}
	
	for(i=0;i<n;i++)
	{
	   a[i]->next=a[i+1];
	   
	   if(i==n-1)
	   {
	     a[i]->next=NULL;	
	   }	
	}
	
	head=a[0];
	
   	display(head);
    l:
    add_at_after(head);
    display(head);
    goto l;
	return 0;
}

