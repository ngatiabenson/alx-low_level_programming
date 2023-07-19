#include "function_pointers.h"

/**
 * print_name -prints a name
 * @name: the name to prints
 * @f:Pointer to funtion
 * return: nothing
 */

void print_name(char *name, void (*f)(char *))
{
	if (name != NULL && f != NULL)
		f(name);
}
