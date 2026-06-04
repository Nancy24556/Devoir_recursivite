
#include <stdio.h>

int pgcd_iter(int a, int b)
{
    while(b != 0)
    {
        int reste = a % b;

        a = b;
        b = reste;
    }

    return a;
}

int main()
{
    printf("PGCD(48,18) = %d\n", pgcd_iter(48,18));

    return 0;
}
