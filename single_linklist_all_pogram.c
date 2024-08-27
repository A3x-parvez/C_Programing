#include<stdio.h>
#include<stdlib.h>
struct node
{
	int data;
	struct node *next;
};

void add_begin(struct node *head)
{
	int num;
 struct node *temp,*nw;
 temp=head;
 nw=(struct node*)malloc(sizeof(struct node));
 printf("Enter the value :");
 scanf("%d",&num);
 nw->data=num;
 nw->next=temp;
 temp=nw;
}
void append(struct node *head)
{
	struct node *temp,*nw;
	int val;
	nw=(struct node *)malloc(sizeof(struct node));
	printf("Enter the value : ");
	scanf("%d",&val);
	
}
void add_after(struct node *head)
{
	
}
void delet(struct node *head)
{
	
}
int count(struct node *head)
{
	
}
void display(struct node *head)
{
	struct node *temp;
	temp=head;
  while(temp!=NULL)
  {
  	printf("%d\t",temp->data);
  	temp=temp->next;
  }
}
void reverse_print(struct node *head)
{
	
}
void reverse(struct node *head)
{
	
}
void b_sort(struct node *head)
{
	
}
void s_sort(struct node *head)
{
	
}

int main()
{
	struct node *head;
	int s;
 while(1)
{
	    printf("\n ENTER YOUR CHOICE");
		printf("\n1 for Add at begin :");
		printf("\n2 for Append ");
		printf("\n3 for Add after ");
		printf("\n4 for Delete ");
		printf("\n5 for Count");
		printf("\n6 for Display");
		printf("\n7 for Reverse print");
		printf("\n8 for Reverse");
		printf("\n9 for Bubble sort");
		printf("\n10 for Selection sort");
		printf("\n11 for Exit");
      printf("\n\nEnter operation :");
      scanf("%d",&s);
	  switch(s)
	{
		case 1 :
			add_begin(head);
			break;
	    case 2 :
			append(head);
			break;
		case 3 :
			add_after(head);
			break;
		case 4 :
			delet(head);
			break;
		case 5 :
			count(head);
			break;
		case 6 :
			display(head);
			break;
		case 7 :
			reverse_print(head);
			break;
		case 8 :
			reverse(head);
			break;
		case 9 :
			b_sort(head);
			break;
		case 10 :
			s_sort(head);
			break;
		case 11 :
			return 0;
		default :
			printf("\nplease,Enter a valid oparation..");
	}
}
}
