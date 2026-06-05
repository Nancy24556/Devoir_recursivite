#include <stdio.h>

int evaluer_iter(int tab[], int taille)
{
    int resultat = 0;
    int i = 0;

    while(i < taille)
    {
        resultat += tab[i];
        i++;
    }

    return resultat;
}

int main()
{
    int tab[] = {2, 3, 4, 5};

    printf("Resultat = %d\n",
           evaluer_iter(tab, 4));

    return 0;
}
