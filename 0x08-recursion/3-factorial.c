#include "main.h"
/**
 * factorial_ factorial of given number
 * @n; points to memory to fill
 * retun:factorial
 */

int factorial(int n)
{
if (n == 0)
return (1);
else if (n < 0)
return (-1);
else
return (n * factorial(n - 1));
}
