#include <stdio.h>
void binaire_rec(int n)
{
    if(n == 0)
    {
        return;
    }
    binaire_rec(n / 2);
    printf("%d", n % 2);
}
int main()
{
    int n = 13;
    printf("Binaire de %d : ", n);
    if(n == 0)
        printf("0");
    else
        binaire_rec(n);
    printf("\n");
    return 0;
}
