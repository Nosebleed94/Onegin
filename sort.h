#ifndef SORT_H_
#define SORT_H_

#include <stdio.h>

void sort (char ** quantity_lines, size_t *num_sym_in_str,size_t sum,
           int(*compare_func)(char* str1, char* str2, size_t size1, size_t size2));

#endif //SORT_H_
