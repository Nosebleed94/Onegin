#include "My_strcmp.h"
#include "write.h"
#include "clean_memory.h"
#include "sort.h"
#include "sum_str.h"
#include "filling_torn_massiv.h"
#include "sum_symbols.h"


#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>
#include <assert.h>
#include <stddef.h>


int main()
{
    FILE* file_read = fopen("Onegin_read.txt","r");
    assert(file_read && "file open err");
    FILE* file_write = fopen("Onegin_write.txt","w");
    assert(file_write && "file open err");

    size_t num_s = sum_symbols (file_read);
    char* buffer = (char*)calloc(num_s + 1, sizeof(char));
    assert (buffer != NULL);

    size_t sum = sum_str (buffer, file_read, num_s);
    char** quantity_lines = (char**)calloc(sum, sizeof(char*));
    assert (quantity_lines != NULL);

    size_t* num_sym_in_str = (size_t*)calloc(sum, sizeof(size_t));
    assert (num_sym_in_str != NULL);

    size_t numbers_words = 0;
    size_t helper_empty_str = sum - 1;
    size_t line = 0;
    size_t num_alpha = 0;

    filling_torn_massiv (quantity_lines, num_sym_in_str, numbers_words,
                         helper_empty_str, &line, num_alpha, num_s, buffer);

    sum = line;

    sort (quantity_lines, num_sym_in_str, sum, my_strcmp);

    write_sort (quantity_lines, sum, file_write);

    fputs("\n !!!!!REVERSE!!!!! \n", file_write);

    sort (quantity_lines, num_sym_in_str, sum, my_reverse_strcmp);

    write_sort (quantity_lines, sum, file_write);

    fputs("\n !!!!!NORMAL!!!!! \n", file_write);

    write_buffer (buffer, num_s, file_write);

    clean_mem (quantity_lines, num_sym_in_str, buffer);

    return 0;
}

