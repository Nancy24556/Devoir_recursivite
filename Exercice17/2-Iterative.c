#include <stdio.h>

int est_paire_iter(int n)
{
    return n % 2 == 0;
}

int est_impaire_iter(int n)
{
    return n % 2 != 0;
}

int main()
{
    int n = 8;

    if(est_paire_iter(n))
    {
        printf("%d est pair\n", n);
    }
    else
    {
        printf("%d est impair\n", n);
    }

    return 0;
}
