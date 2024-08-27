#include<stdio.h>
void Bsearch(int a[],int i,int j,int s)
{
	int mid;
	mid =(i+j)/2;
	if(a[mid]==s)
	{
		printf("The number present at index %d.",mid+1);
	}
	else if(a[mid]<s)
	{
		Bsearch(a,mid+1,j,s);
	}
	else
	{
		Bsearch(a,i,mid-1,s);
	}
    printf("The number does not exist into the list .");
}

void Bsort(int a[],int n)
{
	int i,j;
	for(i=0;i<n-1;i++)
	{
		for(j=0;j<n-i-1;j++)
		{
			if(a[j]>a[j+1])
			{
				int temp=a[j];
				a[j]=a[j+1];
				a[j+1]=temp;
			}
		}
	}
}

int main()
{
	int a[50],k,n,i,r;
	printf("Enter the range : ");
	scanf("%d",&r);
	printf("Enter the eliment : \n");
	for(k=0;k<r;k++)
	{
		printf("Enter the %d eliment :",k+1);
		scanf("%d",&a[k]);
	}
	Bsort(a,r);
	printf("\nThe sorted array is : ");
	for(i=0;i<r;i++)
	{
		printf("%d  ",a[i]);
	}
	printf("\n\nEnter the number you want to search : ");
	scanf("%d",&n);
	Bsearch(a,0,r,n);

}
