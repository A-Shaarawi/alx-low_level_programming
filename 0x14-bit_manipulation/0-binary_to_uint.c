#include <stdio.h>
#include "main.h"

/**
 * binary_to_uint - function
 * @b: parameter
 * Return: value
 */

unsigned int binary_to_uint(const char *b)
{
int i = 0;
int decimal = 0;

if (!b)
return (0);

for (; b[i] != '\0'; i++)
{
if (b[i] < '0' || b[i] > '1')
return (0);
decimal = (2 * decimal) +(b[i] - '0');
}
return (decimal);
}
