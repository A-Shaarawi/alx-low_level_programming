#include <stdio.h>
/**
 * main - function
 * @argc: parameter
 * @argv: parameter
 * Return: 0
 */

int main(int argc, char *argv[])
{
	argc = argc - 1;
	printf("%d\n", argc);
	*argv[0] = 'a';
	return (0);
}
