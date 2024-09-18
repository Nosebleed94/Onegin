#include "sort.h"
#include "My_strcmp.h"

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>
#include <assert.h>
#include <stddef.h>

void sort (char** quantity_lines, size_t sum1)
{
    for (size_t j = 0; j < sum1; j++)
    {
        for (size_t i = 0; i < sum1 - j - 1; i++)
        {
            if (my_strcmp( (quantity_lines[i]), (quantity_lines[i+1])) > 0)
            {
                 char *helper = (quantity_lines[i]);
                                (quantity_lines[i]) = (quantity_lines[i+1]);
                                                      (quantity_lines[i+1]) = helper;
            }
        }
    }
}

//  void reverse_sort (char** quantity_lines, size_t sum1, size_t *ww)
//  {
//     for (size_t j = sum1; j > 0; j--)
//     {
//         for (size_t i = sum1; i > sum1 - j - 1; i--)
//         {
//             if (my_reverse_strcmp( (quantity_lines[i]), (quantity_lines[i-1]), ww[i], ww[i-1]) > 0)
//             {
//                  char *helper = (quantity_lines[i]);
//                                 (quantity_lines[i]) = (quantity_lines[i-1]);
//                                                       (quantity_lines[i-1]) = helper;
//             }
//         }
//     }
//  }
//
