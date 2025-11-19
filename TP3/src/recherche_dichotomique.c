#include <stdio.h>
#include <stdlib.h>

#define SIZE 100

int main() {
    int tableau[SIZE];
    int i;
    int recherche;
    int gauche, droite, milieu;
    int trouve = 0;

    // Remplissage du tableau trié avec des valeurs de 1 à 100
    for (i = 0; i < SIZE; i++) {
        tableau[i] = i + 1;
    }

    // Affichage du tableau trié
    printf("Tableau trié :\n");
    for (i = 0; i < SIZE; i++) {
        printf("%d ", tableau[i]);
    }
    printf("\n\n");

    // Saisie de l'entier à chercher
    printf("Entrez l'entier que vous souhaitez chercher : ");
    scanf("%d", &recherche);

    // Recherche dichotomique
    gauche = 0;
    droite = SIZE - 1;

    while (gauche <= droite) {
        milieu = (gauche + droite) / 2;

        if (tableau[milieu] == recherche) {
            trouve = 1;
            break;
        } else if (tableau[milieu] < recherche) {
            gauche = milieu + 1;
        } else {
            droite = milieu - 1;
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
