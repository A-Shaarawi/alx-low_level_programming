#include "main.h"
/**
 * more_numbers - print more numbers
 */

void more_numbers(void)
{
int i = 1;

while (i <= 10)
{
int j = 0;
while (j <= 14)
{
if (j >= 10)
putchar('1');
putchar(j % 10 + '0');
j++;
putchar('\n');
i++;
}
return (0);
}
}
