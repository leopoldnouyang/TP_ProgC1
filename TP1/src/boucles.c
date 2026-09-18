#include <stdio.h>

int main(void) {
    // La valeur de compteur doit être strictement inférieure à 10
    int compteur = 5; 

    if (compteur >= 10 || compteur <= 0) {
        printf("Erreur : le compteur doit être compris entre 1 et 9.\n");
        return 1;
    }

    printf("--- Affichage du triangle (compteur = %d) avec des boucles for ---\n\n", compteur);

    // Boucle externe pour parcourir les lignes
    for (int i = 0; i < compteur; i++) {
        // Boucle interne pour parcourir les colonnes de la ligne courante
        for (int j = 0; j <= i; j++) {
            // Affichage des étoiles aux extrémités ou sur la dernière ligne complète,
            // et du caractère '#' à l'intérieur pour les lignes intermédiaires.
            if (j == 0 || j == i || i == compteur - 1) {
                printf("* ");
            } else {
                printf("# ");
            }
        }
        printf("\n"); // Passage à la ligne suivante
    }

    return 0;
}