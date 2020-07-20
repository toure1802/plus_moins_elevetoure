#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main ( int argc, char** argv )
{
    int choix_joueur = 6,nombreEntre = 0;
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

        {
		

		        int valeur_trouver = 0, choix_joueur = 0, difficulte = 0;
		        int nombreTape =0, rejouer=0, coups =0, nombres_essaie =0, modeJeu =0, niveauJeu =0;
			const int MAX = 100, MIN = 1;
			srand(time(NULL));
		

		        printf("===Niveau De Difficulte===\n");
		        printf("1. Niveau facile : Entre 1 et 100\n");
		        printf("2. Niveau moyen : Entre 1 et 1000\n");
		        printf("3. Niveau difficile : Entre 1 et 10000\n");
		        scanf("%d", &difficulte);
		        if (difficulte == 1)
		           {
		              int MAX = 100;
			      valeur_trouver = (rand() % (MAX - MIN + 1)) + MIN;
			      nombres_essaie =1000;
			      nombres_essaie--;
			      return plus_moins( valeur_trouver);
		

		

		           }
		        else if (difficulte == 2)
		           {
		              int MAX = 1000;
			      valeur_trouver = (rand() % (MAX - MIN + 1)) + MIN;
			      nombres_essaie = 25;
			      nombres_essaie--;
			      return plus_moins( valeur_trouver);
		

		

		           }
		         else if (difficulte == 3)
		           {
		              int MAX = 10000;
			      valeur_trouver = (rand() % (MAX - MIN + 1)) + MIN;
			      nombres_essaie = 10;
			      nombres_essaie--;
			      return plus_moins( valeur_trouver);
		

		

		           }
		         else
		           {
		              printf("Vous vous êtes trompé de touch\n");
		           }
		  } 

