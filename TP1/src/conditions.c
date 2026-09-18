#include <stdio.h>

int main(void) {
    int somme = 0;

    // 1. Boucle pour parcourir les nombres de 1 à 1000
    for (int i = 1; i <= 1000; i++) {

        // 2. Si le nombre est divisible par 11, on l'ignore et on passe au suivant (continue)
        // Remarque : cette condition est placée en premier pour s'assurer qu'un nombre
        // multiple de 11 (ex: 55 qui est 5 * 11) n'est pas ajouté par erreur.
        if (i % 11 == 0) {
            continue;
        }

        // Si le nombre est divisible par 5 ou par 7, on l'ajoute à la somme
        if (i % 5 == 0 || i % 7 == 0) {
            somme += i;
        }

        // 3. Si la somme dépasse 5000, on arrête immédiatement la boucle (break)
        if (somme > 5000) {
            break;
        }
    }

    // 4. Affichage de la somme finale
    printf("La somme finale est : %d\n", somme);

    return 0;
}