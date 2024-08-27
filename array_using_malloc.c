#include<stdio.h>
#include<stdlib.h>
int main()
{
	printf("\033[1;32mEnter the range of the array :");
	scanf("%d",&n);
	a=(int*)malloc(n*sizeof(int));
  for(i=0;i<n;i++)
  {
  	printf("\nEnter the %d eliment :",i+1);
  	scanf("%d",&a[i]);
  }
  printf("\n The array eliments are :");
  for(i=0;i<n;i++)
  {
  	printf("\n%d\t",a[i]);
  }
  return 0;
}	int *a,n,i;

