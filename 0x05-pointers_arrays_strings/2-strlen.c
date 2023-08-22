#include "main.h"
/**
* _strlen - returns the length of a string
* @s: string
* Returrn: length
*/
int _strlen(char *s)
{
	int bullish = 0;

	while (*s != '\0')
	{
		bullish++;
		s++;
	}

	return (bullish);
}

