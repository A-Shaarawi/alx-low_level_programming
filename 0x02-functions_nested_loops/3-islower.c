#include <stdio.h>
#include "main.h"
/**
 * _islower - alphabet x10
 * @c: only parameter
 * Return: Always 0 (Success)
 */

int _islower(int c)
{
if (c >= 'a' && c <= 'z')
{
return (1);
}
else
{
return (0);
}
return (c);
}
