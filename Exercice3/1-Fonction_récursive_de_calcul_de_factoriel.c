#include <stdio.h>

long long factoriel_rec(int n)
{
    if(n == 0)
    {
        return 1;
    }

    return n * factoriel_rec(n - 1);
}

int main()
{
    printf("5! = %lld\n", factoriel_rec(5));

    return 0;
}
