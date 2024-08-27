#include <stdio.h>
#include <math.h>

// Function to calculate f(x) for the given equation
float f(float x) {
    return pow(x, 3) - x + 1;
}

// Function to calculate the derivative of f(x)
double df(double x) {
    return 3 * pow(x, 2) - 1;
}

int main() {
    float x1, x2, h, x0, f0, df0, x=2.25;
    int iterations, i;

    // Input values
    printf("Enter the initial guess x1: ");
    scanf("%lf", &x1);
    printf("Enter the second guess x2: ");
    scanf("%lf", &x2);
    printf("Enter the step size h: ");
    scanf("%lf", &h);
    printf("Enter the number of iterations: ");
    scanf("%d", &iterations);

    // Newton's forward difference formula iterations
    x0 = x1;
    f0 = f(x0);
    df0 = df(x0);

    for (i = 0; i < iterations; i++) {
        x = x0 - (f0 / df0);
        printf("Iteration %d: x = %lf\n", i + 1, x);

        x0 = x;
        f0 = f(x0);
        df0 = df(x0);
    }

    printf("\nThe solution of the equation x^3 - x + 1 = 0 is: %lf\n", x);

    return 0;
}

