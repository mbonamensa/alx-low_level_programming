#include <main.h>

/**
 * _strcat - concatenates two strings
 * @dest: A pointer to a character that will be updated
 * @src: A pointer to character that will also be updated
 *
 * Return: dest
 */

char *_strcat(char *dest, char *src)
{
	int i = 0, j = 0;

	while (dest[i] != '\0')
		i++;

	while (src[j] != '\0')
	{
		dest[i] = src[j];
		i++;
		j++;
	}

	dest[i] = '\0';

	return (dest);
}
