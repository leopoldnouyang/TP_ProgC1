#include <stdio.h>
#include <stdbool.h> // Nécessaire pour utiliser le type booléen en C

int main(void) {
    // Initialisation des variables
    int a = 16;
    int b = 3;

    printf("--- Test des operateurs en C (a = %d, b = %d) ---\n\n", a, b);

    // 1. Addition
    int somme = a + b;
    printf("1. Addition (a + b) = %d\n", somme);

    // 2. Soustraction
    int difference = a - b;
    printf("2. Soustraction (a - b) = %d\n", difference);

    // 3. Multiplication
    int produit = a * b;
    printf("3. Multiplication (a * b) = %d\n", produit);

    // 4. Division
    int quotient = a / b;
    printf("4. Division entiere (a / b) = %d\n", quotient);
    // (Optionnel : affichage de la division réelle avec des décimales)
    float quotient_reel = (float)a / b;
    printf("   (Division reelle : %.2f)\n", quotient_reel);

    // 5. Modulo (reste de la division entière)
    int reste = a % b;
    printf("5. Modulo (a %% b) = %d\n", reste);

    // 6. Comparaison d'égalité
    bool egal = (a == b);
    printf("6. Est-ce que a est égal à b ? %s (%d)\n", egal ? "vrai" : "faux", egal);

    // 7. Comparaison de supériorité
    bool superieur = (a > b);
    printf("7. Est-ce que a est supérieur à b ? %s (%d)\n", superieur ? "vrai" : "faux", superieur);

    return 0;
}

