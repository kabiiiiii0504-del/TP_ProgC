#include <stdio.h>

int main() {
    char chaine1[50] = "Hello";
    char chaine2[50] = " World!";
    char copie[50];
    char concat[100];

    int i = 0;
    int longueur = 0;

    // ------------------------------
    // 1. Calcul de longueur de chaine1
    // ------------------------------
    while (chaine1[longueur] != '\0') {
        longueur++;
    }

    printf("Longueur de \"%s\" : %d\n", chaine1, longueur);

    // ------------------------------
    // 2. Copie de chaine1 dans copie
    // ------------------------------
    i = 0;
    while (chaine1[i] != '\0') {
        copie[i] = chaine1[i];
        i++;
    }
    copie[i] = '\0'; // fin de chaîne obligatoire

    printf("Copie : %s\n", copie);

    // ------------------------------
    // 3. Concaténation de chaine1 + chaine2 dans concat
    // ------------------------------
    int j = 0;

    // Copie de chaine1 dans concat
    while (chaine1
