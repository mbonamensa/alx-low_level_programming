#include <stdio.h>
#include "main.h"

/**
 * main - Print the program's name
 * @argc: Count arguments
 * @argv: Arguments
 *
 * Return: Always 0 which means success
 */

int main(int argc, char *argv[])
{
	(void) argc;
	printf("%s\n", argv[0]);

	return (0);
}
