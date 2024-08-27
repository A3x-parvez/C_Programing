#include<stdio.h>

int main()
{
	int a[10],r,i,j,val,x=0;
	printf("Range :");
	scanf("%d",&r);
	
	for(i=0;i<r;i++)
	{
		printf("Enter the %d eliment : ",i+1);
		scanf("%d",&a[i]);
	}
	
	printf("The array eliment are :\n ");
	for(i=0;i<r;i++)
	{
		printf("The %d eliment : %d \n ",i+1,a[i]);
	}
	
	printf("Enter the search eliment : ");
	scanf("%d",&val);
	
	for(i=0;i<r;i++)
	{
		if(a[i]==val)
		{
			printf("\nThe eliment %d preasent at index %d .",val,i+1);
			x++;
		}
	}
	
	if(x==0)
	{
		printf("The eliment is not present.");
	}
	return 0;
}
