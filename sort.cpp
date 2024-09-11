#include "sort.h"
#include "My_strcmp.h"

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>
#include <assert.h>

void sort (char **onegin, int sum)
{
    for (int j = 0; j < sum - 1; j++)
    {
        for (int i = 0; i < sum - j - 1; i++)
        {
            if (my_strcmp(onegin[i], onegin[i+1]) == 1)
            {
                 char *helper = onegin[i];
                                onegin[i] = onegin[i + 1];
                                            onegin[i + 1] = helper;
            }
        }
    }
}
