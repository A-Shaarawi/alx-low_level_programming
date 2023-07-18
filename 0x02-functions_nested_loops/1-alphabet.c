#include "main.h"
#include <stdio.h>
/**
 * main - Entry point
 * Description: print alphabet
 * print_alphabet() - prints
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
