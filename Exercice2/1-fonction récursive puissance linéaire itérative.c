#include <stdio.h>

long long puissance_lineaire_iter(long long x, int n)
{
    long long resultat = 1;

    for(int i = 0; i < n; i++)
    {
        resultat = resultat * x;
    }

    return resultat;
}

int main()
{
    printf("2^5 = %lld\n", puissance_lineaire_iter(2,5));
    printf("3^4 = %lld\n", puissance_lineaire_iter(3,4));

    return 0;
}
