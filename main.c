/*
Ci-dessous, ce sont des directives de préprocesseur.
Ces lignes permettent d'ajouter des fichiers au projet,
fichiers que l'on appelle bibliothèques.
Grâce à ces bibliothèques, on disposera de fonctions toutes prêtes pour afficher
par exemple un message à l'écran.
*/
#include <stdio.h>
#include <stdlib.h>
/*
préprocesseur.
bibliothéque pour les math
*/
#include <math.h>
/*
Ci-dessous, vous avez la fonction principale du programme, appelée main.
C'est par cette fonction que tous les programmes commencent.
Ici, ma fonction se contente d'afficher Bonjour à l'écran.
*/

int main(int argc, char* argv[])
{
    int resultat = 0, nombre1 = 0, nombre2 = 0;

    // On deman de les nombres 1 et 2 à l'utilisateur :

    printf("Entrez le nombre 1 : ");
    scanf_s("%d", &nombre1);
    printf("Entrez le nombre 2 : ");
    scanf_s("%d", &nombre2);

    // On fait le calcul :

    resultat = nombre1 + nombre2;

    // Et on affiche l'addition à l'écran :

    printf("%d + %d = %d\n", nombre1, nombre2, resultat);

    return 0;
}
