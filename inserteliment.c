#include<stdio.h>
int main()
{
	int a[50],n,c,i,x;
	printf("\033[1;34mEnter the range :");
	scanf("%d",&x);
	for(i=0;i<x;i++)
	{
		 printf(" \033[1;31mEnter the %d eliment :",i+1);
		 scanf("%d",&a[i]);
		 
	}
  printf("\n\nThe data before any change : ");
  for(i=0;i<x;i++)
  {
  printf("\n%d",a[i]);
  }
   printf("\n\033[1;34mEnter the index where you want to add eliment :");
   scanf("%d",&n);
   printf("\n\033[1;34mEnter the eliment which you want to add :");
   scanf("%d",&c);
   
for(i=x;i>=n;i--)
{
a[i]=a[i-1];
}
a[n-1]=c;
printf("\n\033[1;32mThe data after add new value :");
for(i=0;i<x+1;i++)
{ 
printf("\n\033[1;32m%d",a[i]);
}
return 0;
} 






