#include <unistd.h>

/**
* _putvhar - writes c to stdout
* @c: the character to print
* return: on success 1, on error -1
*/

int _putchar(char c)
{
return (write(1, &c, 1));
}
