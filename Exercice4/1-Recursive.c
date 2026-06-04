#include <stdio.h>

int nb_chiffres_rec(int n)
{
    if(n < 10)
    {
        return 1;
    }
    return 1 + nb_chiffres_rec(n / 10);
}
int nb_chiffres_rec_final(int n)
{
    if(n == 0)
    {
        return 1;
    }
    return nb_chiffres_rec(n);
}
int main()
{
    printf("1258 : %d chiffres\n", nb_chiffres_rec_final(1258));
    printf("0 : %d chiffre\n", nb_chiffres_rec_final(0));
    return 0;
}
