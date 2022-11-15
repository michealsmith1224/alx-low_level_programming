#include "main.h"
#include "stdio.h"


/**
 *  puts_half - print half of string
 * 
 *  @str: the string to be halfved
 *  Return: 0
*/


void puts_half(char *str)
{
    int n, len, i;

    len = 0;
    while (str[len])
    {
        len++;
    }

    if (len % 2 == 0)
    {
        n = len / 2;
    }
    else
    {
        n = (len - 1) / 2;
    }

    for (i = n; i < len; i++)
    {
        _putchar(str[i]);
    }
   
    _putchar('\n');
}