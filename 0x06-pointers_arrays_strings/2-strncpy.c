#include "main.h"

/**
* _strncat - concatenates two strings
* @dest: A pointer to a character that will be updated
* @src: A pointer to a character that will also be updated
* 
* @n: the number of bytes to use from src
* Return: dest
*/

char *_strncpy(char *dest, char *src, int n)
{
	int i = 0, k = 0;

	while (n > k)
	{
		if (src[k] == '\0')
		{
			for (; k < n; k++)
			{
				dest[i] = '\0';
				i++;
			}
		}
		else
		{
			dest[i] = src[k];
			k++;
			i++;
		}
	}

	return (dest);
}
