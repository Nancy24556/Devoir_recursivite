#include <stdio.h>

long long factoriel_iter(int n)
{
    long long resultat = 1;

    for(int i = 1; i <= n; i++)
    {
        resultat *= i;
    }

    return resultat;
}

long long combinaison_iter(int n, int p)
{
    return factoriel_iter(n) /
           (factoriel_iter(p) *
            factoriel_iter(n - p));
}

int main()
{
    printf("C(5,2) = %lld\n", combinaison_iter(5,2));

    return 0;
}
