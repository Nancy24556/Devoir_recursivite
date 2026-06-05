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

int palindrome_iter(int n)
{
    return n == inverser_iter(n);
}

int main()
{
    int n = 1221;

    if(palindrome_iter(n))
    {
        printf("Palindrome\n");
    }
    else
    {
        printf("Pas palindrome\n");
    }

    return 0;
}
