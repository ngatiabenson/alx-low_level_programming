#include "main.h"
/**
 * print_rev_recursion - prints string in reverse
 *  * @s: pointer block to memory fil
 *  return: void
 */

void _print_rev_recursion(char *s)
{
if (*s)
{
_print_rev_recursion(s + 1);
_putchar(*s);
}
}
