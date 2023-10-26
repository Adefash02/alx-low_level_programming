#include "main.h"

/**
 * _strlen_recursion - the main function
 * @s: parameter function
 * Return: a string should be return
 */

int _strlen_recursion(char *s)
{
	if (*s != '\0')
	{
		return (1 + _strlen_recursion(s + 1));
	}
	return (0);
}

