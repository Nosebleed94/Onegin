#include <stdio.h>
#include <stdlib.h>

size_t sum_symbols (FILE* file_read)
{
    fseek(file_read, 0, SEEK_END);
    size_t symbols = (size_t)ftell(file_read);
    fseek(file_read, 0, SEEK_SET);
    return symbols;
}
