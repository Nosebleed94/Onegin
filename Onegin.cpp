#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>
#include <assert.h>

// char *puts_no_n (char *stroka);
int my_strcmp( char *str1, char *str2);
void sort (char **onegin, int sum);

int main()
{
    FILE *file_read = fopen("Onegin_read.txt","r");
    assert(file_read && "file open err");
    FILE *file_write = fopen("Onegin_write.txt","w");

    size_t n = 0;
    int sum = 0;
    char **onegin = (char**)calloc(1000, sizeof(char*));
    for (int i = 0; getline(&onegin[i], &n, file_read) != EOF; i++)
    {
        sum++;
    }
    sort (onegin, sum);

    for (int i = 0; i < sum; i++)
    {
        fputs (onegin[i], file_write);
    }
    return 0;
}

