#include "operator.h"

// Addition
int somme(int num1, int num2) {
    return num1 + num2;
}

// Soustraction
int difference(int num1, int num2) {
    return num1 - num2;
}

// Multiplication
int produit(int num1, int num2) {
    return num1 * num2;
}

// Division
int quotient(int num1, int num2) {
    if (num2 != 0)
        return num1 / num2;
    else
        return 0; // valeur par défaut si division par zéro
}

// Modulo
int modulo(int num1, int num2) {
    if (num2 != 0)
        return num1 % num2;
    else
        return 0; // valeur par défaut si division par zéro
}

// AND bit-à-bit
int et(int num1, int num2) {
    return num1 & num2;
}

// OR bit-à-bit
int ou(int num1, int num2) {
    return num1 | num2;
}

// Négation bit-à-bit du premier nombre
int negation(int num1) {
    return ~num1;
}
