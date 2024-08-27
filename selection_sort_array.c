#include<stdio.h>
int main()
{
int a[10];
int r,i,v,j;
printf("Enter range : ");
scanf("%d",&r);

printf("Enter eliment : ");
for(i=0;i<r;i++)
{
 scanf("%d",&a[i]);	
}

printf("The eliments before sorting :");
for(i=0;i<r;i++)
{
 printf("%d ",a[i]);	
}

for(i=0;i<r-1;i++)
{
	for(j=i+1;j<r;j++)
	{
		if(a[i]>a[j])
		{
			int temp;
			temp=a[i];
			a[i]=a[j];
			a[j]=temp;
		}
	}
}

printf("\nThe eliments after sorting :");
for(i=0;i<r;i++)
{
 printf("%d ",a[i]);	
}

}
