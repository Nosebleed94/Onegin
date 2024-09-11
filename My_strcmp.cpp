#include "My_strcmp.h"

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>
#include <assert.h>

int my_strcmp( char *str1, char *str2)
{
    int n = 0;
    while( *(str1+n) != '\0' || *(str2+n) != '\0' )
    {
        if (*(str1+n) > *(str2+n))
        return 1;
        if(*(str1+n) < *(str2+n))
        return -1;
        n++;
    }
    return 0;
}
