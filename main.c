#include <stdlib.h>
#include <stdio.h>
#include <time.h>
int main()
{
    int nombre;
    int i = 1;
    int mode;
    printf("Bonjour !\n");
    printf("Quelle difficulté voulez-vous ?\n");
    printf("Répondez 100, 1000 ou 10000 : ");
    scanf("%d", &mode);
    if(mode == 100)
    {
        srand(time(NULL));
        int random_number = rand() % 100 + 1;
        printf("Choisissez un nombre entre 1 et 100 : ");
        scanf("%d", &nombre);
        while(nombre != random_number)
        {
            if(nombre < random_number)
            {
                printf("C'est plus !\n");
            }
            else if(nombre > random_number)
            {
                printf("C'est moins !\n");
            }
            i = i + 1;
            printf("Choisissez un nombre entre 1 et 100 : ");
            scanf("%d", &nombre);
        }
    }
    else if(mode == 1000)
    {
        srand(time(NULL));
        int random_number = rand() % 1000 + 1;
        printf("Choisissez un nombre entre 1 et 1000 : ");
        scanf("%d", &nombre);
    
        while(nombre != random_number)
        {
            if(nombre < random_number)
            {
                printf("C'est plus !\n");
            }
            else if(nombre > random_number)
            {
                printf("C'est moins !\n");
            }
            i = i + 1;
            printf("Choisissez un nombre entre 1 et 1000 : ");
            scanf("%d", &nombre);
        }
    }
    else if(mode == 10000)
    {
        srand(time(NULL));
        int random_number = rand() % 10000 + 1;
        printf("Choisissez un nombre entre 1 et 10000 : ");
        scanf("%d", &nombre);
        while(nombre != random_number)
        {
            if(nombre < random_number)
            {
                printf("C'est plus !\n");
            }
            else if(nombre > random_number)
            {
                printf("C'est moins !\n");
            
            }
            i = i + 1;
            printf("Choisissez un nombre entre 1 et 10000 : ");
            scanf("%d", &nombre);
        }
    }
    else
    {
        printf("Ce mode n'existe pas. Relancez le programme.\n");
        exit(0);
    }
    printf("Gagné !\n");
    if(i == 1)
    {
        printf("Vous avez réussi en %d essai\n", i);
    }
    else
    {
        printf("Vous avez réussi en %d essais\n", i);
    }
    exit(0);
}