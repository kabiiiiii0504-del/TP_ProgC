#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define SIZE 100

int main() {
    int tableau[SIZE];
    int i, j, temp;

    // Initialisation du générateur aléatoire
    srand(time(NULL));

    // Remplissage du tableau avec des valeurs aléatoires entre -50 et 50
    for (i = 0; i < SIZE; i++) {
        tableau[i] = rand() % 101 - 50;  // valeurs entre -50 et 50
    }

    // Affichage du tableau non trié
    printf("Tableau non trié :\n");
    for (i = 0; i < SIZE; i++) {
        printf("%d ", tableau[i]);
    }
    printf("\n\n");

    // Tri à bulles (bubble sort)
    for (i = 0; i < SIZE - 1; i++) {
        for (j = 0; j < SIZE - i - 1; j++) {
            if (tableau[j] > tableau[j + 1]) {
                // Échange
                temp = tableau[j];
                tableau[j] = tableau[j + 1];
                tableau[j + 1] = temp;
            }
        }
    }

    // Affichage du tableau trié
    printf("Tableau trié par ordre croissant :\n");
    for (i = 0; i < SIZE; i++) {
        printf("%d ", tableau[i]);
    }
    printf("\n");

    return 0;
}
