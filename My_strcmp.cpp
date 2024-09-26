#include "My_strcmp.h"

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>
#include <assert.h>
#include <stddef.h>

int my_strcmp(char* str1, char* str2, size_t size1, size_t size2)
{
    assert(str1 != NULL);
    assert(str2 != NULL);

    size_t n1 = 0;
    size_t n2 = 0;
    while (*(str1+n1) != '\0' || *(str2+n2) != '\0')
    {
        if (isalpha (*(str1+n1)) == 0)
        {
            n1++;
        }
        if (isalpha (*(str2+n2)) == 0)
        {
            n2++;
        }
        if (tolower (*(str1+n1)) > tolower (*(str2+n2)))
        {
            return 1;
        }
        if (tolower (*(str1+n1)) < tolower (*(str2+n2)))
        {
            return -1;
        }
        n1++;
        n2++;
    }
    return 0;
}

int my_reverse_strcmp (char *str1, char *str2, size_t size1, size_t size2)
{
    assert (str1 != NULL);
    assert (str2 != NULL);

    int n1 = (int)size1;
    int n2 = (int)size2;

    if (n1!= 0)
    {
        n1 = (int)size1 - 1;
    }
    if (n2!= 0)
    {
        n2 = (int)size2 - 1;
    }

    while (n1 > 0 || n2 >0)
    {
        if (isalpha (*(str1+n1)) == 0)
        {
            n1--;
        }
        if (isalpha (*(str2+n2)) == 0)
        {
            n2--;
        }
        if (tolower (*(str1 + n1)) > tolower (*(str2 + n2)))
        {
            return 1;
        }
        if (tolower (*(str1 + n1)) < tolower (*(str2 + n2)))
        {
            return -1;
        }
        n1--;
        n2--;
    }
    return 0;
}
