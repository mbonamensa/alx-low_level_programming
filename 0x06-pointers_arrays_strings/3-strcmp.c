#include "main.h"

/**
* _strcmp - compares two strings
* @s1: A pointer to a character that will be updated
* @s2: A pointer to a character that will also be updated
* 
* Return: dest
*/

int _strcmp(char *s1, char *s2)
{
	int i = 0, cmp = 0;

	while (s1[i] != '\0' && s2[i] != '\0' && cmp == 0)
	{
		cmp = s1[i] - s2[i];
		i++;
	}

	return (cmp);
}
