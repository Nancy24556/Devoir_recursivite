#include <stdio.h>
long long puissance_rapide_iter(long long x, int n)
{
    long long resultat = 1;
    while(n > 0)
    {
        if(n % 2 == 1)
        {
            resultat *= x;
        }
        x *= x;
        n /= 2;
    }
    return resultat;
}
int main()
{
    printf("2^10 = %lld\n", puissance_rapide_iter(2,10));

    return 0;
}
