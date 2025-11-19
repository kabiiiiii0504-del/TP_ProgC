#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define SIZE 100

int main() {
    int tableau[SIZE];
    int i;
    int min, max;

    // Initialisation du générateur de nombres aléatoires
    srand(time(NULL));

    // Remplissage du tableau avec des valeurs aléatoires entre 1 et 1000
    for (i = 0; i < SIZE; i++) {
        tableau[i] = rand() % 1000 + 1;
    }

    // Initialisation min et max avec le premier élément
    min = max = tableau[0];

    // Parcours du tableau pour trouver min et max
    for (i = 1; i < SIZE; i++) {
        if (tableau[i] < min) {
            min = tableau[i];
        }
        if (tableau[i] > max) {
            max = tableau[i];
        }
    }

    // Affichage des résultats
    printf("Le numéro le plus petit est : %d\n", min);
    printf("Le numéro le plus grand est  : %d\n", max);

    return 0;
}
