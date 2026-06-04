
#include <stdio.h>

int somme_rec(int tab[], int taille)
{
    if(taille == 0)
    {
        return 0;
    }

    return tab[taille - 1] + somme_rec(tab, taille - 1);
}

double moyenne_rec(int tab[], int taille)
{
    return (double)somme_rec(tab, taille) / taille;
}

int main()
{
    int tab[] = {10, 12, 18, 20};

    printf("Moyenne = %.2f\n", moyenne_rec(tab, 4));

    return 0;
}
