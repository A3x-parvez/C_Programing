//forward & back
#include <stdio.h>

void forward(float x[], float y[][4], int n, float a);
//void BackWard(float x[], float y[][4], int n, float a);

int main()
{
    int n;

    // Input the number of data points
    printf("Enter the number of data points: ");
    scanf("%d", &n);

    float x[n], y[n][4];

    // Input the data points
    printf("Enter the data points (x and y):\n");
    for (int i = 0; i < n; i++)
    {
        printf("x[%d]: ", i);
        scanf("%f", &x[i]);
        printf("y[%d]: ", i);
        scanf("%f", &y[i][0]); // Assuming only the first column of y is used
    }

    float a; // interpolation point

    // Input the value of 'a' from the user
    printf("Enter the value of 'a' for interpolation: ");
    scanf("%f", &a);

    forward(x, y, n, a);
    //BackWard(x, y, n, a);

    return 0;
}

void forward(float x[], float y[][4], int n, float a)
{
    float h, u, sum, p;

    // Calculate the forward difference table
    for (int j = 1; j < 4; j++)
    {
        for (int i = 0; i < n - j; i++)
        {
            y[i][j] = y[i + 1][j - 1] - y[i][j - 1];
        }
    }

    printf("\n The forward difference table is:\n");

    for (int i = 0; i < n; i++)
    {
        printf("\n");
        for (int j = 0; j < 4 - i; j++)
        {
            printf("%f\t", y[i][j]);
        }
    }

    // Interpolate using forward difference formula
    p = 1.0;
    sum = y[0][0];
    h = x[1] - x[0];
    u = (a - x[0]) / h;

    for (int j = 1; j < 4; j++)
    {
        p = p * (u - j + 1) / j;
        sum = sum + p * y[0][j];
    }

    printf("\nThe value of y at x=%0.1f is %0.3f", a, sum);
}


