#include <stdio.h>
/**
 * print_alphabet_x10 - alphabet x10
 * Return: Always 0 (Success)
 */

void print_alphabet_x10()
{
int counter;

char x;

counter = 1;
while (counter <= 10)
{  
x = 'a';
while (x <= 'z')
{
putchar(x);
x++;
}
putchar('\n');
counter++;
}
}
