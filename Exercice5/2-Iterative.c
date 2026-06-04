#include <stdio.h>
void binaire_iter(int n)
{
    if(n == 0)
    {
        printf("0");
        return;
    }
    int reste[32];
    int i = 0;
    while(n > 0)
    {
        reste[i] = n % 2;
        i++;
        n = n / 2;
    }
    for(int j = i - 1; j >= 0; j--)
    {
    printf("%d", reste[j]);
    }
}
int main()
{
    printf("Binaire de 13 : ");
    binaire_iter(13);
    printf("\n");
    return 0;
}
