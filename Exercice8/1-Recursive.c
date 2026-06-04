#include <stdio.h>

int pgcd_rec(int a, int b)
{
    if(b == 0)
    {
        return a;
    }

    return pgcd_rec(b, a % b);
}

int main()
{
    printf("PGCD(48,18) = %d\n", pgcd_rec(48,18));

    return 0;
}
