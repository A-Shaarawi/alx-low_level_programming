#include <stdio.h>
/**
 * jack_bauer - numbers
 * Return: Always 0 (Success)
 */
void jack_bauer(void)
{
int a, b, c, d;

for (a = 0; a < 3; a++)
{
for (b = 0; b < 10; b++)
{
if ((a <= 1 && b <= 9) || (a <= 2 && b <= 3))
{
for (c = 0; c < 6; c++)
{
for (d = 0; d < 10; d++)
{
putchar(a + '0');
putchar(b + '0');
putchar(58);
putchar(c + '0');
putchar(d + '0');
putchar('\n');
}
}
}
}
}
}
