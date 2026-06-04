#include <stdio.h>

long long puissance_rapide(long long x, int n)
{
    if (n == 0)
    {
        return 1;
    }

    if (n % 2 == 0)
    {
        long long demi = puissance_rapide(x, n / 2);
        return demi * demi;
    }

    return x * puissance_rapide(x, n - 1);
}
int main()
{
    printf("2^10 = %lld\n", puissance_rapide(2, 10));
    return 0;
}