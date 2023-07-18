#include "main.h"
#include <stdio.h>
/**
 * main - Entry point
 * Description: print alphabet
 * print_alphabet() - prints
 * Return: Always 0 (Success)
 */
/**
 * print_alphabet - Brief description of function.
 * void: Describe the first argument.
 *
 * A longer description, with more discussion of the function function_name()
 * that might be useful to those using or modifying it. Begins with an
 * empty comment line, and may include additional embedded empty
 * comment lines.
 *
 * The longer description may have multiple paragraphs.
 *
 * Context: Describes whether the function can sleep, what locks it takes,
 *          releases, or expects to be held. It can extend over multiple
 *          lines.
 * Return: Describe the return value of function_name.
 *
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
