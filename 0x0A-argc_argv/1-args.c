#include "main.h"
#include <stdio.h>

/**
 * main - prints number of args
 * @args: argument count
 * @argv: argument vector
 * return: always zero
 */

int main(int argc, char *argv[])
{
	(void) argv;
	printf("%d\n", argc - 1);
	return (0);
}
