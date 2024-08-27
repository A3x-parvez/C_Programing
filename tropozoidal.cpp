#include <stdio.h>

#define f(x) (x * x - 10)

float func(float x) {
    return x * x - 10;
}

int main() {
    int CNT = 1, n;
    float a, b, m;

    printf("Enter the start and end point of the interval: ");
    scanf("%f%f", &a, &b);

    printf("No. of iterations: ");
    scanf("%d", &n);

    if (f(a) * f(b) > 0) {
        printf("Invalid interval. Please enter a valid interval where f(a) * f(b) < 0.\n");
        return 1;
    }

    m = (a + b) / 2;

    while (CNT <= n) {
        if (f(m) == 0) {
            printf("The root obtained by the bisection method is: %f", m);
            return 0;
        } else if (f(a) * f(m) < 0) {
            b = m;
        } else {
            a = m;
        }
        CNT++;
        m = (a + b) / 2;
    }

    printf("The root obtained by the bisection method is: %f", m);

    return 0;
}

