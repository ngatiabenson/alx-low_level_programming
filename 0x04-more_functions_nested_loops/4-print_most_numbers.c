#include "main.h"
/**
 * print_most_numbers - prints 01356789
 * return: void
 * @c:the character to be searched
 */

void print_most_numbers(void)
{
char c;

	for (c = '0'; c <= '9'; c++)
	{
	if (!(c == '2' || c == '4'))
	_putchar(c);
	}
	_putchar('\n');
}

