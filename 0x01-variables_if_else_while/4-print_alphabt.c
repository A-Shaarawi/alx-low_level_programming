#include <stdio.h>
/**
 * main - Entry point
 * Description: 'the program's description'
 * Return: Always 0 (Success)
 */
int main(void)
{
	char x;

	x = 'a';
	while (x <= 'z')
	{
	if (x == 'e' || x == 'q')
	{
	x++;
	}
	putchar(x);
	x++;
	};
	putchar('\n');
	return (0);
}
