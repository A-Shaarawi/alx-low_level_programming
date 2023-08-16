#include <stdio.h>
#include "function_pointers.h"

/**
 * print_name - fucntion
 * @name: para
 * @f: para
 * return 0
 */

void print_name(char *name, void (*f)(char *))
{
	f(name);
}
