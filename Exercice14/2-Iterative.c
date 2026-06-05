#include <stdio.h>

int somme_chiffres_iter(int n)
{
    int somme = 0;

    while(n > 0)
    {
        somme += n % 10;
        n /= 10;
    }

    return somme;
}

int main()
{
    printf("%d\n", somme_chiffres_iter(1234));

    return 0;
}
