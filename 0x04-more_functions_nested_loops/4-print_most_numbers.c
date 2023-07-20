#include "main.h"
#include <stdio.h>

/**
 * print_most_numbers - returns the largest of 3 numbers
 * Return: largest number
 */

void print_most_numbers(void)
{
int a = 48;
while (a < 58)
{
if (a == 50 || a == 52)
{
a++;
}
putchar(a);
a++;
}
putchar('\n');
}
