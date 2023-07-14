#include <stdio.h>
/**
 * main - Entry point
 * Description: 'the program's description'
 * Return: Always 0 (Success)
 */
int main(void)
{
	int x;

	int y;

	int z;

x = 48;
y = 44;
z = 32;
while (x < 58)
{
putchar(x);
if (x < 57)
{
putchar(y);
putchar(z);
}
else
{
break;
}
x++;
}
putchar('\n');
return (0);
}
