#include "main.h"
#include <stddef.h>
/**
 * _strchr - function name
 * @s: parameter one for s
 * @c: parameter two for c
 * Return: c
 */

char *_strchr(char *s, char c)
{
	while (*s != '\0')
	{
		if (*s == c)
			return (s);
		s++;
	}

	if (*s == c)
		return (s);
	return (NULL);
}

