#include "main.h"

/**
 * _abs - computes absolute value of integers
 * @c: number to be computed
 * return : absolute value of number or zero
 */

int _abs(int c)
{
	if (c < 0)
	{
		int abs_val;

		abs_val = c * -1;
		return (abs_val);
	}
	return (c);
}
