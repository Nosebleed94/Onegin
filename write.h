#ifndef WRITE_H_
#define WRITE_H_

#include <stdio.h>

void write_sort (char** quantity_lines, size_t sum, FILE* file_write);
void write_buffer (char* buffer, size_t num_s, FILE* file_write);

#endif //WRITE_H_
