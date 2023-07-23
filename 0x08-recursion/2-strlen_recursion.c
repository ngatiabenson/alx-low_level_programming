#include "main.h"
/**
 * _srtlen_recursion- length of string
 * @s:pointer blockto fil memory
 * return:srtlen_recursion
 */
int _strlen_recursion(char *s)
{
	if (*s == '\0')
	{
		return (0);
	}
	s++;
	return (_strlen_recursion(s) + 1);
}
