#include <stdio.h>

long long factoriel(int n)
{
    if(n == 0)
    {
        return 1;
    }

    return n * factoriel(n - 1);
}

long long combinaison_rec(int n, int p)
{
    return factoriel(n) /
           (factoriel(p) * factoriel(n - p));
}

int main()
{
    printf("C(5,2) = %lld\n", combinaison_rec(5,2));

    return 0;
}
