#include <stdio.h>

// Déclarations et définitions des fonctions
int somme(int num1, int num2) { return num1 + num2; }
int difference(int num1, int num2) { return num1 - num2; }
int produit(int num1, int num2) { return num1 * num2; }
int quotient(int num1, int num2) { return (num2 != 0) ? num1 / num2 : 0; }
int modulo(int num1, int num2) { return (num2 != 0) ? num1 % num2 : 0; }
int et(int num1, int num2) { return num1 & num2; }
int ou(int num1, int num2) { return num1 | num2; }
int negation(int num1) { return ~num1; }

int main() {
    int num1, num2, resultat;
    char op;

    // Saisie des nombres
    printf("Entrez num1 : ");
    scanf("%d", &num1);
    printf("Entrez num2 : ");
    scanf("%d", &num2);

    // Saisie de l'opérateur
    printf("Entrez l'opérateur (+, -, *, /, %%, &, |, ~) : ");
    scanf(" %c", &op);  // espace pour ignorer le retour à la ligne

    // Sélection de l'opération
    switch(op) {
        case '+': resultat = somme(num1, num2); break;
        case '-': resultat = difference(num1, num2); break;
        case '*': resultat = produit(num1, num2); break;
        case '/': 
            if(num2 != 0) resultat = quotient(num1, num2);
            else { printf("Erreur : division par zéro !\n"); return 1; }
            break;
        case '%':
            if(num2 != 0) resultat = modulo(num1, num2);
            else { printf("Erreur : modulo par zéro !\n"); return 1; }
            break;
        case '&': resultat = et(num1, num2); break;
        case '|': resultat = ou(num1, num2); break;
        case '~': resultat = negation(num1); break;
        default:
            printf("Opérateur invalide !\n");
            return 1;
    }

    printf("Résultat : %d\n", resultat);
    return 0;
}
