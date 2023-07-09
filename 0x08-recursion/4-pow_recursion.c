#include "main.h"
/**
 * _pow_recursion -return the value of x raised by power y
 * @x:ineger
 * @y:integer
 * return: pow recursion
 */

int _pow_recursion(int x, int y)
{
if (y < 0)
{
return (-1);
}
else if (y != 0)
return (x * _pow_recursion(x, y - 1));
else
return (1);
}
