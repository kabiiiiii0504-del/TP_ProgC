#include <stdio.h>

int main() {
    // Tableaux de 5 étudiant.e.s
    char noms[5][30] = {
        "Durand",
        "Martin",
        "Bernard",
        "Petit",
        "Dupont"
    };

    char prenoms[5][30] = {
        "Alice",
        "Lucas",
        "Maya",
        "Hugo",
        "Emma"
    };

    char adresses[5][50] = {
        "12 Rue des Fleurs",
        "5 Avenue du Parc",
        "18 Boulevard Lumiere",
        "7 Rue Victor Hugo",
        "21 Rue de la Paix"
    };

    float note_prog[5] = {14.5, 12.0, 16.5, 10.0, 13.0};
    float note_sys[5] = {15.0, 11.5, 17.0, 9.5, 14.0};

    // Affichage des informations de chaque étudiant.e
    for (int i = 0; i < 5; i++) {
        printf("Étudiant %d :\n", i + 1);
        printf("  Nom       : %s\n", noms[i]);
        printf("  Prénom    : %s\n", prenoms[i]);
        printf("  Adresse   : %s\n", adresses[i]);
        printf("  Prog C    : %.2f\n", note_prog[i]);
        printf("  Sys. Expl.: %.2f\n\n", note_sys[i]);
    }

    return 0;
}
