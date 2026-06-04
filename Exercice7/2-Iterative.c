#include <stdio.h>

int max_iter(int tab[], int taille)
{
    int maximum = tab[0];
    int i = 1;
    while(i < taille)
    {
        if(tab[i] > maximum)
        {
            maximum = tab[i];
        }
        i++;
    }
    return maximum;
}

int main()
{
    int tab[] = {12, 7, 25, 18, 4};
    printf("Maximum = %d\n", max_iter(tab, 5));
    return 0;
}
