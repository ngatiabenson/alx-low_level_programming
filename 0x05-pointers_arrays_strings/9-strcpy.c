#include "main.h"

/**
 * char *_strcpy - copies string pointed to by source.
 * @dest:copy to here.
 * @src:copy from here.
 * return:string
 */

char *_strcpy(char *dest, char *src)
{
	int l = 0;
	int x = 0;

	while (*src(+l) != '\0')
	{
		l++;
	}
	for ( ; x < l ; x++)
	{
		dest[x] = src[x];
	}
	dest[l] = '\0';
	return (dest);
}
