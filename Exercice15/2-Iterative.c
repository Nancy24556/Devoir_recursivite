#include <stdio.h>

int inverser_iter(int n)
{
    int inverse = 0;

    while(n > 0)
    {
        inverse = inverse * 10 + (n % 10);
        n /= 10;
    }

    return inverse;
}

int main()
{
    printf("%d\n", inverser_iter(1234));

    return 0;
}
