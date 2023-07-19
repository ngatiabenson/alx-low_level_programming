#include "3-calc.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * op_add - operation add
 * @a:ineger
 * @b:integer
 * return: zero
 */

int op_add(int a, int b)
{
	return(a + b);
}

/**
 * op_sub-subtraction
 * @a:integer
 * @b:integer
 * return: zero
 */
int op_sub(int a, int b)
{
	return (a - b);
}
/**
 * op_mul - multiplication
 * @a:integer
 * @b:integer
 * return:zero
 */
int op_mul(int a, int b)
{
	return (a * b);
}
/**
 * op_div -division
 * @a:integer
 * @b:integer
 * return:zero
 */
int op_div(int a, int b)
{
	if (b == 0)
	{
		printf("error\n");
		exit(100);
	}
	return (a / b);
}
/**
 * op_mod- modulus
 * @a:integer
 * @b:integer
 * return:zero
 */
int op_mod(int a, int b)
{
	if (b == 0)
	{
		printf("error\n");
		exit(100);
	}
	return (a % b);
}
