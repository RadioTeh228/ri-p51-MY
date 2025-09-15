#include <stdio.h>

int main() {
    int choice;           // Змінна для вибору варіанту
    double X1, X2, delta; // Аргументи та крок

    // Виведення меню для вибору варіанту введення
    printf("Choose input option:\n");
    printf("1 - Enter X1 and X2\n");
    printf("2 - Enter X1, X2 and delta\n");
    printf("Your choice (1 or 2): ");
    scanf("%d", &choice);

    if (choice == 1) {
        // Варіант 1: введення лише X1 і X2
        printf("Enter X1: ");
        scanf("%lf", &X1);
        printf("Enter X2: ");
        scanf("%lf", &X2);

        // Виведення введених значень
        printf("You entered X1 = %.2f and X2 = %.2f\n", X1, X2);

    } else if (choice == 2) {
        // Варіант 2: введення X1, X2 і delta
        printf("Enter X1: ");
        scanf("%lf", &X1);
        printf("Enter X2: ");
        scanf("%lf", &X2);
        printf("Enter delta: ");
        scanf("%lf", &delta);

        // Виведення введених значень
        printf("You entered X1 = %.2f, X2 = %.2f, delta = %.2f\n", X1, X2, delta);

    } else {
        // Обробка некоректного вибору
        printf("Invalid choice. Please restart the program and enter 1 or 2.\n");
    }

    return 0; // Завершення програми
}
