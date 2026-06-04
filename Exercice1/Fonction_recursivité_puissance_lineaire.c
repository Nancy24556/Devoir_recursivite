#include <stdio.h>

long long puissance_lineaire(long long x, int n)
{
    if (n == 0)
    {
        return 1;
    }
    return x * puissance_lineaire(x, n - 1);
}
int main()
{
    printf("2^3 = %lld\n", puissance_lineaire(2, 3));
    return 0;
}
