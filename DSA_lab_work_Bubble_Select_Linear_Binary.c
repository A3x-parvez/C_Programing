#include<stdio.h>

void bubble(int a[],int n);
void select(int a[],int n);
void linear(int a[],int n);
void binary(int a[],int n);

int main()
{
	int data[10],i,j,n,op;
  printf("Enter the range : ");
  scanf("%d",&n);
  printf("\nEnter the array eliment : \n");
  for(i=0;i<n;i++)
  {
  	printf("Enter the %d eliment : ",i+1);
  	scanf("%d",&data[i]);
  }
  ret:
  printf("\n");
  printf("\nEnter '1' for Bubble short :\nEnter '2' for Selection short :\nEnter '3' for Linear search :\nEnter '4' for Binary search :");
  printf("\nEnter the operation : ");
  scanf("%d",&op);
  printf("\n\n");
  switch(op)
  {
  	case 1 : bubble(data,n);
  	goto ret;
  	break;
  	case 2 : select(data,n);
  	goto ret;
  	break;
  	case 3 : linear(data,n);
  	goto ret;
  	break;
  	case 4 : binary(data,n);
  	goto ret;
  	break;
  	default:
  		printf("Invalid command .");
  	goto ret;
  	return ;
  }
  return 0;
}

void bubble(int a[],int n)
{
	int i,j,t;
	for(i=0;i<n-1;i++)
	{
		for(j=0;j<n-i-1;j++)
		{
			if(a[j]>a[j+1])
			{
			 t=a[j];
			 a[j]=a[j+1];
			 a[j+1]=t;	
			}
		}
	}
	printf("The array after shorting : ");
	for(i=0;i<n;i++)
	{
		printf("%d\t",a[i]);
	}
}

void select(int a[],int n)
{
   int j,i,t;
   for(i=0;i<n-1;i++)
   {
   	 for(j=i;j<n-1;j++)
   	 {
   	 	if(a[i]>a[j+1])
   	 	{
   	 	   t=a[i];
   	 	   a[i]=a[j+1];
   	 	   a[j+1]=t;
		}
   	 	
	 }
   }
  printf("The array after shorting : ");
  for(i=0;i<n;i++)
  {
    printf("%d\t",a[i]);	
  }	
}

void linear(int a[],int n)
{
	int i,num;
	int check = 0;
 printf("Enter the number which you want to search :");
 scanf("%d",&num);
  for(i=0;i<n;i++)
  {
  	if(a[i]==num)
  	{
  		printf("The number %d present at index no. : %d",num,i+1);
  		check= 1;
	}
  }
  if(check== 0)
  {
  	printf("The number is not exist .");
  }
}

void binary(int a[],int n)
{
	int i,j,t,num,found=1;
	for(i=0;i<n-1;i++)
	{
		for(j=0;j<n-i-1;j++)
		{
			if(a[j]>a[j+1])
			{
			 t=a[j];
			 a[j]=a[j+1];
			 a[j+1]=t;	
			}
		}
	}
	printf("Enter the number you want to search : ");
	scanf("%d",&num);
	
	int u=n-1,l=0,mid;
	for(i=l;i<=u;i++)
	{
		mid=(l+u)/2;
		if(a[mid]==num)
		{
		   found=0;
		}

		if(a[mid]<num)
		{
		   l=mid+1;
		}
		else
		{
		   u=mid-1;	
		}
	}
	
 if(found==0)
 	printf("The number %d present at index no. : %d",num,mid+1);
 else
    printf("The number does no exist.");
}



