#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define SIZE 100

int main() {
    int tableau[SIZE];
    int i, recherche;
    int trouve = 0;

    // Initialisation du générateur de nombres aléatoires
    srand(time(NULL));

    // Remplissage du tableau avec des valeurs aléatoires entre -50 et 50
    for (i = 0; i < SIZE; i++) {
        tableau[i] = rand() % 101 - 50;
    }

    // Affichage du tableau
    printf("Tableau :\n");
    for (i = 0; i < SIZE; i++) {
        printf("%d ", tableau[i]);
    }
    printf("\n\n");

    // Saisie de l'entier à chercher
    printf("Entrez l'entier que vous souhaitez chercher : ");
    scanf("%d", &recherche);

    // Recherche linéaire
    for (i = 0; i < SIZE; i++) {
        if (tableau[i] == recherche) {
            trouve = 1;
            break;
        }
    }

    // Affichage du résultat
    if (trouve) {
        printf("Résultat : entier présent\n");
    } else {
        printf("Résultat : entier absent\n");
    }

    return 0;
}
