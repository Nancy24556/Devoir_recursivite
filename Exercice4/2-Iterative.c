#include <stdio.h>

int nb_chiffres_iter(int n)
{
    if(n == 0)
    {
        return 1;
    }
    int compteur = 0;
    while(n > 0)
    {
        compteur++;
        n = n / 10;
    }
    return compteur;
}
int main()
{
    printf("1258 : %d chiffres\n", nb_chiffres_iter(1258));
    printf("0 : %d chiffre\n", nb_chiffres_iter(0));
    return 0;
}
