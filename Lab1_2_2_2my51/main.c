#include <stdio.h>
#include <stdlib.h>
#include <math.h>

double f(double x) {
    return (pow(x, 3) / 30.0) - (4 * pow(x, 2)) + 50;
}

int main() {
    double X1, X2, delta;
    unsigned int N;
    int mode;

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
        if (N > 1) {
            delta = (X2 - X1) / (N - 1);
        } else {
            printf("Error: N must be > 1\n");
            return 1;
        }

    } else if (mode == 2) {
        printf("Enter X1: ");
        scanf("%lf", &X1);
        printf("Enter X2: ");
        scanf("%lf", &X2);
        printf("Enter step delta: ");
        scanf("%lf", &delta);

        if (delta > 0) {
            N = (unsigned int)((X2 - X1) / delta) + 1;
        } else {
            printf("Error: delta must be > 0\n");
            return 1;
        }

    } else {
        printf("Error: wrong mode.\n");
        return 1;
    }

    printf("X1=%.2lf,  X2=%.2lf,  delta=%.2lf\n\n", X1, X2, delta);

    printf("--------------------------------------------\n");
    printf("*   N   *    X    *    F(X)   *\n");
    printf("--------------------------------------------\n");

    int rowsPerPage = 9;
    for (unsigned int i = 0; i < N; i++) {
        double x = X1 + i * delta;
        double y = f(x);

        printf("| %3u  | %6.2lf | %8.2lf |\n", i + 1, x, y);

        if ((i + 1) % rowsPerPage == 0 && (i + 1) < N) {
            printf("--------------------------------------------\n");
            printf("Press Any Key to Continue ...\n");
            getchar();
            getchar();
            printf("--------------------------------------------\n");
        }
    }

    printf("--------------------------------------------\n");

    return 0;
}
