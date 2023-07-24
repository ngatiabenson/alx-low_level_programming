#include "main.h"

/**
 * _islower - checks for lower case characters
 * @c:character to be checked
 * return: 1 for lowercase letter and zero for anything else
 */

int _islower(int c)
{
	if (c >= 97 && c <= 122)
	{
		return (1);
	}
	return (0);
}
