#include <stdio.h>
/**
 * print_sign - numbers
 * @n: only paarameter
 * Return: Always 0 (Success)
 */

int print_sign(int n)
{
if (n > 0)
{
putchar('+');
return (1);
}
if (n < 0)
{
printf("-");
return (-1);
}
else
{
printf("0");
return (0);
}
return (n);
}
