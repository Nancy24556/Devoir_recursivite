#include <stdio.h>

int somme_chiffres_rec(int n)
{
    if(n == 0)
    {
        return 0;
    }

    return (n % 10) + somme_chiffres_rec(n / 10);
}

int main()
{
    printf("%d\n", somme_chiffres_rec(1234));

    return 0;
}
