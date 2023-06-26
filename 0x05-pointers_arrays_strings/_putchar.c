#include <unistd.h>

/**
 * _putchar -writes the character c to standard output
 * @c:character to be print
 * return:on success 1
 * on errir , -1
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}
