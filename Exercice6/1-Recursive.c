#include <stdio.h>
int somme_rec(int tab[], int taille)
{
    if(taille == 0)
    {
        return 0;
    }
    return tab[taille - 1] + somme_rec(tab, taille - 1);
}
int main()
{
    int tab[] = {5, 8, 2, 10};
    printf("Somme = %d\n", somme_rec(tab, 4));
    return 0;
}
