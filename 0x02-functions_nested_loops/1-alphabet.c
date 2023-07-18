#include "main.h"
#include <stdio.h>
/**
 * main - Entry point
 * Description: print alphabet
 * Return: Always 0 (Success)
 */
/**
 * print_alphabet - print alphabet
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
