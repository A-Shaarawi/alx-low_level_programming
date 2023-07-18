#include "main.h"
#include <stdio.h>
/**
 * main - Entry point
 * Description: print alphabet
 * void - second
 * Description2: print alphabets
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
