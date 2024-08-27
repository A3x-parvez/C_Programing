//Newton's interpolation table print.
#include<stdio.h>

int main()
{
	int x[20],y[20][20],i,j,n;
	printf("Enter range : ");
	scanf("%d",&n);
	
	for(i=0;i<n;i++)
	{
		printf("\nX%d : ",i+1);
		scanf("%d",&x[i]);
		printf("\nY%d : ",i+1);
		scanf("%d",&y[i][0]);
	}
	
	for(i=1;i<n;i++)
	{
		for(j=0;j<n-i;j++)
		{
		y[j][i]=y[j+1][i-1]-y[j][i-1];
	    }
	}
	
	printf("Forward difference table : \n");
	
	for(i=0;i<n;i++)
	{
		printf("%d\t",x[i]);
		for(j=0;j<n-i;j++)
		{
			printf("%d\t",y[i][j]);
		}
		printf("\n");
	}
	return 0;
}
