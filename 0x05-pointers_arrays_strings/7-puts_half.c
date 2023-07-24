#include "main.h"
#include <stdio.h>

/**
 * puts_half - funtion
 * @str: parameter
 * if odd len, n = (length_of_the_string - 1) / 2
 * Return: number
 */

void puts_half(char *str)
{
char *r = str;

int count = 0;

int i = 0;

while (*r != '\0')
{
r++;
count++;
}
i = (count + 1) / 2;
while (i < count)
{
_putchar(str[i]);
i++;
}
_putchar('\n');
}
