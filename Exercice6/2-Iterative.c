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
int main()
{
    int tab[] = {5, 8, 2, 10};
    printf("Somme = %d\n", somme_iter(tab, 4));
    return 0;
}
