#include <stdio.h>
/**
 * main - Entry point
 * Description: 'the program's description'
 * Return: Always 0 (Success)
 */
void print_alphabet(void);

int main(void)
{
print_alphabet();
return (0);
}

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
