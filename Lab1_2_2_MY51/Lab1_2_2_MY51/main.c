#include <stdio.h>
#include <stdlib.h>
#include <math.h>

// function for variant 4
double f(double x) {
    return (pow(x, 3) / 30.0) - (4 * pow(x, 2)) + 50;
}

int main() {
    double X1, X2, delta;
    unsigned int N;
    int mode; // input mode (1 or 2)

    printf("Choose input mode:\n");
    printf("1 - X1, X2, N\n");
    printf("2 - X1, X2, delta\n");
    printf("Your choice: ");
    scanf("%d", &mode);

    if (mode == 1) {
        printf("Enter X1: ");
        scanf("%lf", &X1);
        printf("Enter X2: ");
        scanf("%lf", &X2);
        printf("Enter number of points N: ");
        scanf("%u", &N);

