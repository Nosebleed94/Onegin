#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>
#include <assert.h>
#include <stddef.h>
#include "filling_torn_massiv.h"

void filling_torn_massiv (char** quantity_lines, size_t* num_sym_in_str, size_t numbers_words,
                          size_t helper_empty_str, size_t* line, size_t num_alpha, size_t num_s, char* buffer)
{
    for (size_t i = 0; i < num_s; i++)
    {
        if (*(buffer + i) != '\0')
        {
            numbers_words++;
            if (isalpha (*(buffer + i)) != 0)
            {
                (num_alpha)++;
            }
        }
        else
        {
            if (numbers_words != 0)
            {
                if (num_alpha != 0)
                {
                    num_sym_in_str[*line] = numbers_words;
                    quantity_lines[*line] = buffer + i - numbers_words;
                    (*line)++;
                    numbers_words = 0;
                    num_alpha = 0;
                }
                else
                {
                    num_sym_in_str[helper_empty_str] = numbers_words;
                    quantity_lines[helper_empty_str] = buffer + i;
                    (helper_empty_str)--;
                    numbers_words = 0;
                }
            }
            else
            {
                num_sym_in_str[helper_empty_str] = numbers_words;
                quantity_lines[helper_empty_str] = buffer + i - numbers_words;
                (helper_empty_str)--;
            }
        }
    }
}
