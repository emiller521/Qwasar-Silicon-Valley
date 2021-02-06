#include "tar.h"

void my_putchar(char c)
{
    write(1, &c, 1);
}

void my_bzero(char *buff, int size) {
    int i;

    i = 0;
    while (i < size)
    {
        buff[i] = 0;
        i++;
    }
}

void my_putstr(char *str)
{
    int i = 0;

    while(str[i])
        ft_putchar(str[i++]);
}

char* bool_to_str(int value)
{
    if (value == TRUE)
        return("TRUE");
    else
        return("FALSE");
}