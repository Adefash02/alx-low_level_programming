#include "main.h"

/**
 * _strpbrk - the main function of prototype
 * @s: paraameter one for s
 * @accept: parameter two for accept
 * Return: Always 0.
 */

char *_strpbrk(char *s, char *accept)
{
	int l, j;

	for (l = 0; s[l] != '\0'; l++)
	{
		for (j = 0; accept[l] != '\0'; j++)
		{
			if (s[l] == accept[j])
				return (s + l);
		}
	}
	return (0);
}

