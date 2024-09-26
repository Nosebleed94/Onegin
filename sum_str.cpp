#include <stdio.h>
#include <stdlib.h>

size_t sum_str (char* buffer,  FILE* file_read, size_t num_s)

{
    fread (buffer, sizeof(char), num_s, file_read);
    size_t summa = 0;

    for (size_t i = 0; i < num_s; i++)
    {
         if (buffer[i] == '\n')
        {
            buffer[i] = '\0';
            summa++;
        }
    }
    return summa;
}
