#include "main.h"
#include <stdio.h>

/**
 * _isupper - returns the largest of 3 numbers
 * @c: para
 * Return: largest number
 */

int _isupper(int c)
{
if (c > 'A' && c < 'Z')
{
return (1);
}
else if (c > 'a' && c < 'z')
{
return (0);
}
return (c);
}
