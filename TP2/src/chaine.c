#include <stdio.h>

int main() {
    char chaine1[50] = "Hello";
    char chaine2[50] = " World!";
    char copie[50];
    char concat[100];

    int i = 0;

    // ------------------------------
    // 1. Calcul manuel de la longueur
    // ------------------------------
    int longueur = 0;
    while (chaine1[longueur] != '\0') {
        longueur++;
    }

    printf("Longueur de chaine1 : %d\n", longueur);

    // ------------------------------
    // 2. Copie manuelle de chaine1 → copie
    // ------------------------------
    i = 0;
    while (chaine1[i] != '\0') {
        copie[i] = chaine1[i];
        i++;
    }
    copie[i] = '\0';

    printf("Copie : %s\n", copie);

    // ------------------------------
    // 3. Concaténation manuelle : chaine1 + chaine2 → concat
    // ------------------------------

    int j = 0;

    // Copier chaine1
    while (chaine1[j] != '\0') {
        concat[j] = chaine1[j];
        j++;
    }

    // Ajouter chaine2
    int k = 0;
    while (chaine2[k] != '\0') {
        concat[j] = chaine2[k];
        j++;
        k++;
    }

    concat[j] = '\0';

    printf("Concaténation : %s\n", concat);

    return 0;
}
