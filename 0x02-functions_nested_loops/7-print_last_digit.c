#include <stdio.h>
#include "main.h"
/**
 * print_last_digit - numbers
 * @c: only paarameter
 * Return: Always 0 (Success)
 */
int print_last_digit(int c)
{
if (c < 0)
{
	c = c * -1;
}
_putchar(c + c);
return (c % 10);
}
