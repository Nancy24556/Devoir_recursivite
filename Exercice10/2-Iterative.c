#include <stdio.h>

int somme_iter(int tab[], int taille)
{
    int somme = 0;
    int i = 0;

    while(i < taille)
    {
        somme += tab[i];
        i++;
    }

    return somme;
}

double moyenne_iter(int tab[], int taille)
{
    return (double)somme_iter(tab, taille) / taille;
}

int main()
{
    int tab[] = {10, 12, 18, 20};

    printf("Moyenne = %.2f\n", moyenne_iter(tab, 4));

    return 0;
}
