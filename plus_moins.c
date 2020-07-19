
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main ( int argc, char** argv )
{
    int choix_joueur = 0,nombreEntre = 0;
    const int MAX = 100, MIN = 1;

    // Génération du nombre aléatoire

    srand(time(NULL));
    choix_joueur = (rand() % (MAX - MIN + 1)) + MIN;


    /* La boucle du programme. Elle se répète tant que l'utilisateur n'a pas trouvé le nombre mystère */

    do
    {
        // On demande le nombre
        printf("Quel est le nombre ? ");
        scanf("%d", &nombreEntre);

        // On compare le nombre entré avec le choix_joueur

        if (choix_joueur > nombreEntre)
            printf("C'est plus !\n\n");
        else if (choix_joueur < nombreEntre)
            printf("C'est moins !\n\n");
        else
            printf ("Bingo\n");
    } while (nombreEntre != choix_joueur);
    
    return 0;
}

