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

int main()
{
    printf("%d\n", inverser_rec(1234));

    return 0;
}
