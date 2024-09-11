#include <stdio.h>
#include <stdlib.h>


void sort ( int *mass, const int LENGHT);
int main()

{
    const int LENGHT = 10;
    int a [LENGHT] = {34,67,567,54,3,455,66,77,87,69};
    sort (a, LENGHT);
    return 0;
}

void sort (int *mass, const int LENGHT)
{
    int j =0;
    for (j =0; j < LENGHT - 1; j++)
    {
        int i = 0;
        for (i = 0; i < LENGHT - 1; i++)
        {
            if (mass[i] > mass[i+1])
            {
                int h = 0;
                h = mass[i+1];
                    mass[i+1] = mass[i];
                                mass[i] = h;
            }
        }
    }

    for (int i = 0; i < LENGHT; i++)
    {
        printf("%d: %d\n", i, mass[i]);
    }
}






