#include <stdio.h>

int combinaison_rec(int n, int p)
{
    if(p == 0 || p == n)
    {
        return 1;
    }

    return combinaison_rec(n - 1, p - 1)
         + combinaison_rec(n - 1, p);
}

int main()
{
    printf("C(5,2) = %d\n", combinaison_rec(5,2));

    return 0;
}
