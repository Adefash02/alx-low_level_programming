#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * create_array - create array of size size and assign char c
 * @size: size of array parameter
 * @c: char to assign parameter
 * Description: creat array of size size and assign char c
 * Return: pointer to array, NULL it fail
 */
char *create_array(unsigned int size, char c)
{
	char *str;

	unsigned int i;

	str = malloc(sizeof(char) * size);

	if (size == 0 || str == NULL)
		return (NULL);

	for (i = 0; i < size; i++)
		str[i] = c;
	return (str);
}
