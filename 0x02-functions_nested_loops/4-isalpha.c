#include "main.h"

/**
 * _isalpha - checks for aphabetic character
 * c: character to be checked
 * return: 1 for alphabetic character otherwise 0
 */

int _isalpha(int c)
{
	if ((c >= 65 && c <= 98) || (c >= 97 && c <= 122))
	{
		return (1);
	}
	return (0);
}
