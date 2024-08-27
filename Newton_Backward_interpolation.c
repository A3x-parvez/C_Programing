//Newtons Backward interpolation
#include<stdio.h>

void main() {
    float x[20], y[20][20];
    int n, i, j;

    printf("Enter range : ");
    scanf("%d", &n);

    printf("Enter the data =\n");
    for (i = 0; i < n; i++) {
        printf("X[%d] = ", i + 1);
        scanf("%f", &x[i]);
        printf("Y[%d] = ", i + 1);
        scanf("%f", &y[i][0]);
    }

    for (i = 1; i < n; i++) {
        for (j = n - 1; j >= i; j--) {
            y[j][i] = y[j][i - 1] - y[j - 1][i - 1];
        }
    }

    printf("\nBackward Difference table : \n");
    for (i = 0; i < n; i++) {
        printf("%0.2f", x[i]);
        for (j = 0; j <= i; j++) {
            printf("\t%0.2f", y[i][j]);
        }
        printf("\n");
    }
}

