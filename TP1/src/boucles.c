#include <stdio.h>

int main() {
    int compteur = 5; // valeur du triangle (à modifier si besoin)

    printf("=== Triangle avec boucles for ===\n");

    for (int i = 1; i <= compteur; i++) {
        for (int j = 1; j <= i; j++) {
            if (i > 2 && j > 1 && j < i)
                printf("# ");
            else
                printf("* ");
        }
        printf("\n");
    }

    return 0;
}
