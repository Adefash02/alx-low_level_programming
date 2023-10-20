#include "main.h"

/**
 * _strncpy - Th opy funtion name
 * @dest: first parameter one
 * @src: second parameter two
 * @n: third parameter three
 * Return: dest
 */

char *_strncpy(char *dest, char *src, int n)
{
	int k;

	for (k = 0; k < n && src[k] != '\0'; k++)
	{
		while (k < n)
		{
			dest[k] = '\0';
			k++;
		}
	}
	return (dest);
}

