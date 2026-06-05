#include <stdio.h>

int evaluer_rec(int tab[], int taille)
{
    if(taille == 1)
    {
        return tab[0];
    }

    return tab[taille - 1]
           + evaluer_rec(tab, taille - 1);
}

int main()
{
    int tab[] = {2, 3, 4, 5};

    printf("Resultat = %d\n",
           evaluer_rec(tab, 4));

    return 0;
}
