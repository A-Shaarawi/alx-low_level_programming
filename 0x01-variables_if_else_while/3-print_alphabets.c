#include <stdio.h>
/**
 * main - Entry point
 * Description: 'the program's description'
 * Return: Always 0 (Success)
 */
int main(void)
{
	char x;
	char y;
	x = 'a';
	y = 'A';
	while (x <= 'z')
		{
		putchar(x);
		x++;
		};
	while (y <= 'Z')
		{
		putchar(y);
		y++;
		};
	putchar('\n');
	return (0);
}
