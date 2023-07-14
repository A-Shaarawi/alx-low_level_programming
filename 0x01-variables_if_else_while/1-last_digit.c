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

	int x;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	x = n % 10;
if (n > 5)
{
printf("Last digit of %d is %d and is greater than 5", n, x);
printf("\n");
};
if (n < 6)
{
printf("Last digit of %d is %d and is less than 6 and not 0", n, x);
printf("\n");
};
if (n == 0)
{
printf("Last digit of %d is %d and 0", n, x);
printf("\n");
};
return (0);
}
