#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define SIZE 11

int main() {
    int tabInt[SIZE];
    float tabFloat[SIZE];

    srand(time(NULL)); // Initialisation de la graine pour rand()

    // ----------------------------
    // Remplissage des tableaux
    // ----------------------------
    int *pInt = tabInt;
    float *pFloat = tabFloat;

    for (int i = 0; i < SIZE; i++) {
        *(pInt + i) = rand() % 100 + 1;          // valeurs entières 1 à 100
        *(pFloat + i) = ((float)(rand() % 1000)) / 100.0f; // float 0.00 à 9.99
    }

    // ----------------------------
    // Affichage avant multiplication
    // ----------------------------
    printf("Tableau d'entiers avant multiplication par 3 :\n");
    for (int i = 0; i < SIZE; i++) {
        printf("%d ", *(pInt + i));
    }
    printf("\n");

    printf("Tableau de floats avant multiplication par 3 :\n");
    for (int i = 0; i < SIZE; i++) {
        printf("%.2f ", *(pFloat + i));
    }
    printf("\n");

    // ----------------------------
    // Multiplication par 3 des valeurs aux indices divisibles par 2
    // ----------------------------
    for (int i = 0; i < SIZE; i++) {
        if (i % 2 == 0) {
            *(pInt + i) *= 3;
            *(pFloat + i) *= 3.0f;
        }
    }

    // ----------------------------
    // Affichage après multiplication
    // ----------------------------
    printf("\nTableau d'entiers après multiplication par 3 :\n");
    for (int i = 0; i < SIZE; i++) {
        printf("%d ", *(pInt + i));
    }
    printf("\n");

    printf("Tableau de floats après multiplication par 3 :\n");
    for (int i = 0; i < SIZE; i++) {
        printf("%.2f ", *(pFloat + i));
    }
    printf("\n");

    return 0;
}
