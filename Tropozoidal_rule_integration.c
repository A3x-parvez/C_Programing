//Trapezoidal rule of integration

#include<stdio.h>

float y(float x) 
{
    return (1 + x);
}

int main() 
{
    float x0, xn, h, sum = 0.0;
    int n,i;
    printf("Enter the lower limit -x0: ");
    scanf("%f", &x0);
    printf("Enter the upper limit -xn: ");
    scanf("%f", &xn);
    printf("Enter the number of intervals: ");
    scanf("%d", &n);
    h = (xn - x0) / n;
    sum = y(x0) + y(xn);
    for (i = 1; i < n; i++) 
	{
        sum += 2 * y(x0 + i * h);
    }
    printf("\nIntegral sum = %.2f\n", (h / 2) * sum);
    return 0;
}
