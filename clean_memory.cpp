#include <stdio.h>
#include <stdlib.h>

#include "clean_memory.h"

void clean_mem (char** quantity_lines, size_t* num_sym_in_str, char* buffer)
{
    free (buffer);
    free (num_sym_in_str);
    free (quantity_lines);
    return;
}
