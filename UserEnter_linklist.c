//Bubble short in Linklist 
#include<stdio.h>
#include<stdlib.h>
//Linklist declaration.
struct node
{
 int data;
 struct node *next;
};

//display function
void disp(struct node *temp)
{
  printf("\n\n");
  int i=1;
   while(temp!=NULL)
    {
 printf("The data %d is = %d\n",i,temp->data);
 printf("The memory location is = %d\n",temp);
 temp=temp->next;
 i++;
  }
}


//main function 

int main()
{
printf("\033[1;32m");
int x[10],i,r;
printf("Enter the range :");
scanf("%d",&r);

//Input data from user.
for(i=0;i<r;i++)
{
 printf("Enter the num : ");
 scanf("%d",&x[i]);
}

//declaration linklist veriable.

struct node *a[10],*head;
//Allocate memory for each node.
for(i=0;i<r;i++)
{
a[i]=(struct node *)malloc(sizeof(struct node));
}

//Assign the value to the linklist.

for(i=0;i<r;i++)
{
a[i]->data=x[i];
}

//Connect the nodes.

for(i=0;i<r;i++)
{
a[i]->next=a[i+1];
if(i==r-1)
{
 a[i]->next=NULL;
}
}
head=a[0];

//Function call by the main function.
disp(head);

return 0;
}
//Written by Parvez. date-08/09/2023
