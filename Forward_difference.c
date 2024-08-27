#include <stdio.h>
#include <math.h>

double forwardDifference(double x1, double x2, double f1, double f2) {
    return (f2 - f1) / (x2 - x1);
}

double function(double x) {
    return pow(x, 3) - x + 1;
}

double newtonForwardDifference(double x, double x1, double f1, double h) {
    return f1 + (x - x1) * forwardDifference(x1, x1 + h, function(x1), function(x1 + h));
}

int main() {
    double x1, x2, x, f, h;

    printf("Enter the values of x1, x2, x, f(x), and h:\n");
    scanf("%lf %lf %lf %lf %lf", &x1, &x2, &x, &f, &h);

    // Perform one iteration of Newton's forward difference formula
    double result = newtonForwardDifference(x, x1, f, h);

    printf("The solution of the equation x^3 - x + 1 = 0 using Newton's forward difference formula is: %lf\n", result);

    return 0;
}


