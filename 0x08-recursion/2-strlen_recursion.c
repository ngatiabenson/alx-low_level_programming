#include "main.h"
/**
 * _srtlen_recursion- length of string
 * @s:pointer blockto fil memory
 * return:srtlen_recursion
 */
int _srtlen_recursion(char *s)
{
if (*s == '\0')
return (0);
else
return (1 + _srtlen_recursion(s + 1));
}
