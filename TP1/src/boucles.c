#include <stdio.h>

int main(void) {
    int compteur = 5; // Essayez de modifier cette valeur (ex: 3, 7, 9)
    int i = 0;

    if (compteur >= 10 || compteur <= 0) {
        printf("Erreur : le compteur doit être compris entre 1 et 9.\n");
        return 1;
    }

    printf("--- Affichage du triangle (compteur = %d) avec des boucles while ---\n\n", compteur);

    while (i < compteur) {
        int j = 0;
        while (j <= i) {
            // Conditions pour placer les étoiles ou les symboles '#'
            if (j == 0 || j == i || i == compteur - 1) {
                printf("* ");
            } else {
                printf("# ");
            }
            j++;
        }
        printf("\n");
        i++;
    }

    return 0;
}