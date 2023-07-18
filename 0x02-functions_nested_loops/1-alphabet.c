#include <stdio.h>
/**
 * main - check the code for Holberton School students.
 * Return: Always 0.
 */
void print_alphabet(void);

void print_alphabet()
{
char x;

x = 'a';
while (x <= 'z')
{
putchar(x);
x++;
}
}
int main(void)
{
print_alphabet();
return (0);
}

