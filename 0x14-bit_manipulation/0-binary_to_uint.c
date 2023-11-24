#include "main.h"
/**
 * binary_to_unit - program function that converts binary numbers
 * to integers/decimal number.
 * @b: parametr for a character pointer to a string containing the
 * binary number.
 * Return: returm converted decimal (output).
 */
unsigned int binary_to_unit(const char *b)
{
	unsigned int len, s, j, sum, pow;
	int base;

	base = 2;
	sum = 0;
	pow = 1;

	if (b == NULL)
		return (0);
	for (len = 0; b[len] != '\0'; len++)
		;
	if (len == 1 && (b[0] == '0' || b[0] == '1')
			return (b[0] - 48);
			
	for (s = 0; b[s] != '\0'; s++)
	{
	if (b[s] != '0' && b[s] != '1')
	return (0);
	for (j =len - 1; j > 0;

	}
}	
