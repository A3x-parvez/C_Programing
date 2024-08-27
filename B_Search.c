#include<stdio.h>
int b_search(int data,int a[],int n)
{
	int l=0;
	int r=n-1;
	int mid=l+r/2;
	while(l>r)
	{
		if(data==a[mid])
		return mid;
		else if(data<a[mid])
		r=mid-l;
		else if(data>a[mid])
		l=mid+1;
	}
}
int main()
{
	int i,n,arr[10],d;
	printf("enter the range : ");
	scanf("%d",&n);
	printf("enter the element of an array :");
	for(i=0;i<n;i++){
	scanf("%d",&arr[i]);
    }
    printf("enter the element ");
	scanf("%d",&d);
	int val=b_search(d,arr,n);
	printf("The index num is",val+1);
	
}
