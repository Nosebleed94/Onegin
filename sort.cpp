#include "sort.h"
#include "My_strcmp.h"

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>
#include <assert.h>
#include <stddef.h>

void sort (char** quantity_lines, size_t* num_sym_in_str, size_t sum,
           int(*compare_func)(char* str1, char* str2, size_t size1, size_t size2))
{
    assert (quantity_lines != NULL);
    assert (num_sym_in_str != NULL);
    assert (compare_func != NULL);
    for (size_t j = 0; j < sum; j++)
    {
        for (size_t i = 0; i < sum - j - 1; i++)
        {
            if ((*compare_func)(quantity_lines[i], quantity_lines[i + 1], num_sym_in_str[i], num_sym_in_str[i+1]) > 0)
            {
                char *helper1 = (quantity_lines[i]);
                                (quantity_lines[i]) = (quantity_lines[i + 1]);
                                                      (quantity_lines[i + 1]) = helper1;
                size_t helper2 = num_sym_in_str[i];
                                 num_sym_in_str[i] = num_sym_in_str[i + 1];
                                         num_sym_in_str[i + 1] = helper2;
            }
        }
    }
}

