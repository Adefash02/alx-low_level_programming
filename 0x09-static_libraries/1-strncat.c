#include "main.h"
#include <string.h>
/**
 * _strncat - The strcat function name
 * @dest: parameter one
 * @src: parameter two
 * @n: parameter three
 * Return: dest
 */

char *_strncat(char *dest, char *src, int n)
{
	int len = strlen(dest);
	int k;

	for (k = 0; k < n && *src != '\0'; k++)
	{
		dest[len + k] = *src;
		src++;
	}
	dest[len + k] = '\0';
	return (dest);
}
