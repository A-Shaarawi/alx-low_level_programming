#include <stdlib.h>
#include <stdio.h>
#include <time.h>
/**
 * main - Entry point
 * Description: 'the program's description'
 * Return: Always 0 (Success)
 */
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
if (n > 0)
{
printf("%d is positive", n);
printf("\n");
};
if (n < 0)
{
printf("%d is negative", n);
printf("\n");
};
if (n == 0)
{
printf("%d is zero", n);
printf("\n");
};
return (0);
}
