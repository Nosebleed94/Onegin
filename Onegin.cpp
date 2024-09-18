#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>
#include <assert.h>
#include <stddef.h>

#include "sort.h"
#include "My_strcmp.h"

// struct massiv
// {
//     char ** quantity_lines;
//     size_t *ww;
// }


#define $ fprintf(stderr, "%s:%d %s\n", __FILE__, __LINE__, __func__);

// char *puts_no_n (char *stroka);
void sort (char ** quantity_lines, int sum1);
// void reverse_sort (char** quantity_lines, size_t sum1, size_t *ww);

int main()
{
    fprintf(stderr,"Its okay1\n");

    FILE *file_read = fopen("Onegin_read.txt","r");
    assert(file_read && "file open err");
    FILE *file_write = fopen("Onegin_write.txt","w");
    assert(file_write && "file open err");

    fseek(file_read, 0, SEEK_END);
    size_t num_s = (size_t)ftell(file_read);
    fseek(file_read, 0, SEEK_SET);

    char *buffer = (char*)calloc(num_s + 1, sizeof(char));
    assert (buffer != NULL);

    fread (buffer, sizeof(char), num_s, file_read);
    fprintf(stderr,"Its okay2\n");
    size_t sum1 = 0;
    for (size_t i = 0; i < num_s; i++)
    {
        if (buffer[i] == '\n')
        {
            sum1++;
        }
    }

    fprintf(stderr,"Its okay3\n");
    fprintf(stderr,"sum = %lu\n", sum1);
    char ** quantity_lines = (char**)calloc(sum1, sizeof(char*));
    size_t *ww = (size_t*)calloc(sum1, sizeof(size_t));

    size_t ded = 0;
    size_t numbers_words = 0;

    for (size_t j = 0; j < sum1; j++)// ошибка
    {
        while (buffer[ded] != '\n')
        {
            numbers_words++;
            ded++;
        }
        ww[j] = numbers_words;
        numbers_words = 0;
    }

    fprintf(stderr,"Its okay4\n");

    size_t k = 0;
    quantity_lines[0] = buffer;
    for (size_t i = 1; i < num_s; i++)
    {

      if (*(buffer + i) == '\n')
        {
            *(buffer + i) = '\0';
            quantity_lines[k] = (buffer + i + 1);
            k++;
        }
    }

    fprintf(stderr,"Its okay5\n");

    sort (quantity_lines, sum1) ;

    for (size_t g = 0; g < sum1; g++)
    {
        fputs ((quantity_lines[g]), file_write);
    }

//     reverse_sort (quantity_lines, sum1, ww);
//
//     for (size_t g = 0; g < sum1; g++)
//     {
//         fputs ((quantity_lines[g]), file_write);
//     }

    fprintf(stderr,"Its okay6");
    free(buffer);
    free(ww);
    free(quantity_lines);

    return 0;

}


