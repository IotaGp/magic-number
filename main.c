#include <stdlib.h>
#include <stdio.h>
#include <time.h>
int main()
{
    srand(time(NULL));
    int random_number = rand() % 100 + 1;
    int nombre;
    int i = 1;
    printf("Choisissez un nombre entre 1 et 100 : ");
    scanf("%d", &nombre);
    while(nombre != random_number)
    {
        if(nombre < random_number)
        {
            i = i + 1;
            printf("C'est plus !\n");
            printf("Choisissez un nombre entre 1 et 100 : ");
            scanf("%d", &nombre);
        }
        else if(nombre > random_number)
        {
            i = i + 1;
            printf("C'est moins !\n");
            printf("Choisissez un nombre entre 1 et 100 : ");
            scanf("%d", &nombre);
        }
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