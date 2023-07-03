#include "main.h"
#include <unistd.h>

/**
 * _pitchar - writes the character c to standard output
 * @c: character to be printed
 * return: on success 1, on error  -1 is returned
 */

int _putchar(char c)
{
	return(write(1, &c, 1));
}
