#include <stdio.h>

int fibonacci_rec(int n)
{
    if(n == 0)
    {
        return 0;
    }

    if(n == 1)
    {
        return 1;
    }

    return fibonacci_rec(n - 1) + fibonacci_rec(n - 2);
}

int main()
{
    printf("F(8) = %d\n", fibonacci_rec(8));

    return 0;
}
