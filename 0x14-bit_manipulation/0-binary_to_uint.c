#include "main.h"
/**
 * binary_to_unit - program function that converts binary numbers
 * to integers/decimal number.
 * @b: parametr for a character pointer to a string containing the
 * binary number.
 * Return: unsigned int with decimal value of binsry number, or 0 if error
 */
unsigned int binary_to_unit(const char *b)
{
	int a;
	unsigned int num;

	num = 0;
	if (!b)
		return (0);
	for (a = 0; b[a] != '\0'; a++)
	{
		if (b[a] != '0' && b[a] != '1')
			return (0);
	}
	for (a = 0; b[a] != '\0'; a++)
	{
		num <<= 1;
		if (b[a] == '1')
			num += 1;
	}
	return (num);
}

