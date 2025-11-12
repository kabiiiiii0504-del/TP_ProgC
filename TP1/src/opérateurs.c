#include <stdio.h>

int main() {
    int a = 16;
    int b = 3;

    // Opérateurs arithmétiques
    printf("=== Opérateurs arithmétiques ===\n");
    printf("a + b = %d\n", a + b);
    printf("a - b = %d\n", a - b);
    printf("a * b = %d\n", a * b);
    printf("a / b = %d\n", a / b);
    printf("a %% b = %d\n", a % b);

    // Opérateurs logiques / de comparaison
    printf("\n=== Opérateurs logiques et de comparaison ===\n");
    printf("a == b : %d\n", a == b);   // 1 = vrai, 0 = faux
    printf("a > b  : %d\n", a > b);    // 1 = vrai, 0 = faux
    printf("a < b  : %d\n", a < b);    // 1 = vrai, 0 = faux
    printf("a != b : %d\n", a != b);   // 1 = vrai, 0 = faux
    printf("(a > 10) && (b < 5) : %d\n", (a > 10) && (b < 5)); // ET logique
    printf("(a < 10) || (b == 3) : %d\n", (a < 10) || (b == 3)); // OU logique
    printf("!(a == b) : %d\n", !(a == b)); // NON logique

    return 0;
}
