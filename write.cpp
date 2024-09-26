#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#include "write.h"

void write_sort (char** quantity_lines, size_t sum, FILE *file_write)
{ //FIXME ассерты
  for (size_t g = 0; g < sum; g++)
    {
        fputs ("\n", file_write);
        fputs ((quantity_lines[g]), file_write);
    }
}

void write_buffer (char *buffer, size_t num_s, FILE *file_write)
{ //FIXME ассерты и нейминг
    for (size_t g = 0; g < num_s; g++)
    {
        if(buffer[g] == '\0')
        {
           buffer[g] = '\n';
        }
        fputc(buffer[g],file_write);
    }
}

