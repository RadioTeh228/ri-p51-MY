#include <stdio.h>

int main() {
    int choice1,choice2;          // «м≥нна дл€ вибору вар≥анту введенн€
    double X1, X2, delta; // «м≥нн≥ дл€ початкового значенн€, к≥нцевого значенн€ та кроку

    // ¬иводимо меню дл€ вибору вар≥анту введенн€
    printf("Choose input option:\n");
    printf("1 - Enter X1 and X2 only\n");           // ¬ар≥ант 1: т≥льки X1 ≥ X2
    printf("2 - Enter X1, X2, and delta\n");        // ¬ар≥ант 2: X1, X2 ≥ delta
    printf("Your choice: ");
    scanf("%d", &choice1 );                           // «читуЇмо виб≥р користувача

    if (choice1 == 1) {
        // ќбробка вар≥анту 1: вводимо X1 ≥ X2
        printf("Enter starting value X1: ");
        scanf("%lf", &X1);                          // «читуЇмо X1
        printf("Enter ending value X2: ");
        scanf("%lf", &X2);                          // «читуЇмо X2

        // ¬иводимо введен≥ значенн€
        printf("\nYou entered:\n");
        printf("X1 = %.2lf\n", X1);
        printf("X2 = %.2lf\n", X2);

        // “ут можна додати обчисленн€ або побудову таблиц≥

    } else if (choice1 == 2) {
        // ќбробка вар≥анту 2: вводимо X1, X2 ≥ delta
        printf("Enter starting value X1: ");
        scanf("%lf", &X1);                          // «читуЇмо X1
        printf("Enter ending value X2: ");
        scanf("%lf", &X2);                          // «читуЇмо X2
        printf("Enter step delta: ");
        scanf("%lf", &delta);                       // «читуЇмо delta

        // ¬иводимо введен≥ значенн€
        printf("\nYou entered:\n");
        printf("X1 = %.2lf\n", X1);
        printf("X2 = %.2lf\n", X2);
        printf("Delta = %.2lf\n", delta);

        // “ут можна обчислити к≥льк≥сть точок або побудувати таблицю

    } else {
        // якщо виб≥р некоректний Ч завершуЇмо програму
        printf("Invalid choice. Program terminated.\n");
        return 1;
    }

    return 0; // «авершенн€ програми
}

