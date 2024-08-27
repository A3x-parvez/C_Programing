//Newtons Forward interpolation
#include <stdio.h>

int main()
 {
    float x[20], y[20][20], p, sum, h, u, a;
    int n, i, j;

    printf("Enter range: ");
    scanf("%d", &n);

    for (i = 0; i < n; i++)
	{
        printf("\nX%d: ", i + 1);
        scanf("%f", &x[i]);
        printf("Y%d: ", i + 1);
        scanf("%f", &y[i][0]);
    }

    for (i = 1; i < n; i++) {
        for (j = 0; j < n - i; j++) {
            y[j][i] = y[j + 1][i - 1] - y[j][i - 1];
        }
    }

    printf("\nForward difference table:\n");

    for (i = 0; i < n; i++) {
        printf("%.2f\t", x[i]);
        for (j = 0; j < n - i; j++) {
            printf("%.2f\t", y[i][j]);
        }
        printf("\n");
    }

    printf("Enter the point: "); 
    scanf("%f", &a);

    p = 0.5;
    sum = y[0][0];
    h = x[1] - x[0];
    u = (a - x[0]) / h;

    for (j = 1; j < n; j++) {
        p *= (u - j + 1) / j;
        sum += p * y[0][j];
    }

    printf("\nValue of y at x = %.2f is %.2f\n", a, sum);
    return 0;
}
