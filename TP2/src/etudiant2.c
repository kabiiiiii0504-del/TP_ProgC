#include <stdio.h>
#include <string.h>

struct Etudiant {
    char nom[30];
    char prenom[30];
    char adresse[100];
    float note1;  // Programmation C
    float note2;  // Système d'exploitation
};

int main() {
    struct Etudiant etudiants[5];  // tableau de 5 étudiant.e.s

    printf("=== Saisie des données des 5 étudiant.e.s ===\n\n");

    for (int i = 0; i < 5; i++) {
        printf("Étudiant.e %d\n", i + 1);

        printf("Nom : ");
        scanf("%s", etudiants[i].nom);

        printf("Prénom : ");
        scanf("%s", etudiants[i].prenom);

        printf("Adresse : ");
        scanf(" %[^\n]", etudiants[i].adresse); // lit toute la ligne

        printf("Note Programmation C : ");
        scanf("%f", &etudiants[i].note1);

        printf("Note Système d'exploitation : ");
        scanf("%f", &etudiants[i].note2);

        printf("\n");
    }

    // -------------------------------------------------
    // Affichage des données
    // -------------------------------------------------

    printf("\n=== Affichage des données des étudiant.e.s ===\n\n");

    for (int i = 0; i < 5; i++) {
        printf("Étudiant.e %d :\n", i + 1);
        printf("  Nom    : %s\n", etudiants[i].nom);
        printf("  Prénom : %s\n", etudiants[i].prenom);
        printf("  Adresse: %s\n", etudiants[i].adresse);
        printf("  Note 1 : %.2f\n", etudiants[i].note1);
        printf("  Note 2 : %.2f\n\n", etudiants[i].note2);
    }

    return 0;
}
