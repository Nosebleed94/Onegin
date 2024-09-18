#include "My_strcmp.h"

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>
#include <assert.h>
#include <stddef.h>

int my_strcmp( char *str1, char *str2)
{
    // return strcasecmp (str1, str2);
    size_t n = 0;
    while( *(str1+n) != '\0' || *(str2+n) != '\0' )
    {
        if (*(str1+n) > *(str2+n))
        {
            return 1;
        }
        if(*(str1+n) < *(str2+n))
        {
            return -1;
        }
        n++;
    }
    return 0;
}

// int my_reverse_strcmp ( char *str1, char *str2, size_t size1, size_t size2)
// {
//     size_t h = size1;
//     size_t l = size2;
//     for (h = size1 - 1, l = size2 - 1; size2 <= 0, size1 <= 0; h--, l--)
//     {
//         if (*(str1 + h) > *(str2 + l))
//         {
//             return 1;
//         }
//         if (*(str1 + h) < *(str2 + l))
//         {
//              return -1;
//         }
//     }
//     return 0;
// }
//
//
//
//
//
//
