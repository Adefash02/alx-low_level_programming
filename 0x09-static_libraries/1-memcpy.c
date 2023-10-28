#include "main.h"

/**
  * _memcpy - function copies
  * @n: parameter one
  * @src: parameter two
  * * @dest: paramemter three
  * Return: dest
  */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i = 0;

	while (i < n)
	{
		dest[i] = src[i];
		i++;
	}

	return (dest);
}

