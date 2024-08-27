// Simpson 1/3 rule of integration

#include<stdio.h>
float y(float x)
{
	return(1+x);
}
int main()
{
	float x0,xn,h,sum=0.0;
	int n,i;
	printf("Enter the upper limit :-xn = ");
	scanf("%f",&xn);
	printf("Enter the lower limit :-x0 = ");
	scanf("%f",&x0);
	printf("Enter the number of intervals = ");
	scanf("%d",&n);
	h=(xn-x0)/n;
	sum=y(x0)+y(xn);
	for(i=1;i<n;i++)
	{
		if(i%2==0)
		sum+=2*y(x0+i*h);
		else
		sum+=4*y(x0+i*h);
	}
	printf("\n\nIntegral sum = %0.2f",(h/3)*sum);
}
