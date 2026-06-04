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
int main()
{
    printf("5! = %lld\n", factoriel_iter(5));

    return 0;
}
