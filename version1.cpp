#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>
#include <assert.h>

void sort (const char *massiv[], const size_t LENGHT);
int main()
{
    const size_t LENGHT = 6;
    const char *massiv[LENGHT] = {"onegin", "vovka", "golovka", "zalupka" , "polnai", "onexuy"};
    sort (massiv, LENGHT);
    return 0;
}

void sort (const char *massiv[], const size_t LENGHT)
{
    for (int j = 0; j < LENGHT - 1; j++)
    {
        for (int i = 0; i < LENGHT - 1; i++)
        {
            if (strcmp(massiv[i], massiv[i+1]) > 0)
            {
                const char* helper = massiv[i];
                                     massiv[i] = massiv[i+1];
                                                massiv[i+1] = helper;
            }
        }
    }

    for (int i = 0; i < LENGHT; i++)
    {
        puts(massiv[i]);
    }
}








