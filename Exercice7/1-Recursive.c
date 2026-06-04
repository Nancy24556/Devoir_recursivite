#include <stdio.h>
int max_rec(int tab[], int taille)
{
    if(taille == 1)
    {        return tab[0];
    }

    int max_reste = max_rec(tab, taille - 1);
    return (tab[taille - 1] > max_reste)
           ? tab[taille - 1]
           : max_reste;
}
int main()
{
    int tab[] = {12, 7, 25, 18, 4};
    printf("Maximum = %d\n", max_rec(tab, 5));
    return 0;
}
