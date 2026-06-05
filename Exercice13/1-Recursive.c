#include <stdio.h>

void hanoi(int n, char depart, char inter, char arrivee)
{
    if(n == 1)
    {
        printf("Disque 1 : %c -> %c\n", depart, arrivee);
        return;
    }

    hanoi(n - 1, depart, arrivee, inter);

    printf("Disque %d : %c -> %c\n", n, depart, arrivee);

    hanoi(n - 1, inter, depart, arrivee);
}

int main()
{
    hanoi(3, 'A', 'B', 'C');

    return 0;
}
