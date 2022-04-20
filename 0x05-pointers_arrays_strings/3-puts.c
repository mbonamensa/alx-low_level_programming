#include "main.h"
#include <stdio.h>

/**
 * _puts - print a string
 * @str: a pointer to an integer that will be updated
 *
 * Return: void which means answer is correct
 */

void _puts(char *str)
{
	char *c;

	int m;

	c = str;

	for (m = 0; c[m]; m++)
	{
		_putchar (c[m]);
	}

	_putchar ('\n');
}
