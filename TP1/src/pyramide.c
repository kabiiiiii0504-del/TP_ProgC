#include <stdio.h>

int main(void)
{
    int n = 5;  // hauteur de la pyramide
    int i, j;

    for (i = 1; i <= n; i++) {

        // afficher les espaces
        for (j = i; j < n; j++)
            printf(" ");

        // afficher les nombres croissants
        for (j = 1; j <= i; j++)
            printf("%d", j);

        // afficher les nombres décroissants
        for (j = i - 1; j >= 1; j--)
            printf("%d", j);

        // passer à la ligne suivante
        printf("\n");
    }

    printf("Pyramide de hauteur %d générée avec succès.\n", n);

    return 0;
}

