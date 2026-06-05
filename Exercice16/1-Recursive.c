#include <stdio.h>

int inverser_rec_aux(int n, int inverse)
{
    if(n == 0)
    {
        return inverse;
    }

    return inverser_rec_aux(
        n / 10,
        inverse * 10 + n % 10
    );
}

int inverser_rec(int n)
{
    return inverser_rec_aux(n, 0);
}

int palindrome_rec(int n)
{
    return n == inverser_rec(n);
}

int main()
{
    int n = 1221;

    if(palindrome_rec(n))
    {
        printf("Palindrome\n");
    }
    else
    {
        printf("Pas palindrome\n");
    }

    return 0;
}
