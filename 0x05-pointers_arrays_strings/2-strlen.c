#include "main.h"
#include <stdio.h>

/**
 * strlen - length of a string
 * @s: A pointer to an int that will be updated
 *
 * Return void that means answer is correct
 */

int _strlen(char *s)
{
	int u;

	u = 0;

	while (s[u] != '\0')
	{
		u++;
	}

	return (u);
}
