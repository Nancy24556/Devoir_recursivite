#include <stdio.h>

int est_impaire(int n);

int est_paire(int n)
{
    if(n == 0)
    {
        return 1;
    }

    return est_impaire(n - 1);
}

int est_impaire(int n)
{
    if(n == 0)
    {
        return 0;
    }

    return est_paire(n - 1);
}

int main()
{
    int n = 8;

    if(est_paire(n))
    {
        printf("%d est pair\n", n);
    }
    else
    {
        printf("%d est impair\n", n);
    }

    return 0;
}
