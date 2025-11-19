#ifndef OPERATOR_H
#define OPERATOR_H

// Déclaration des fonctions pour les opérations
int somme(int num1, int num2);
int difference(int num1, int num2);
int produit(int num1, int num2);
int quotient(int num1, int num2);
int modulo(int num1, int num2);
int et(int num1, int num2);    // AND bit-à-bit
int ou(int num1, int num2);    // OR bit-à-bit
int negation(int num1);        // ~ (bit-à-bit) sur le premier nombre

#endif


