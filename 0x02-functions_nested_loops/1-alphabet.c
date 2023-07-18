#include "main.h"
#include <stdio.h>
/**
 * print_alphabet - prints alphabet
 * Return: Always 0 (Success)
 */

void print_alphabet(void)
{
	char x;

	x = 'a';
	while (x <= 'z')
	{
	putchar(x);
	x++;
	}
	putchar('\n');
}
