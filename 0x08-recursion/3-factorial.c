#include "main.h"

/**
 * *factorial - the main function
 * @n: parameter n
 * Return: factorial of a given
 */

int factorial(int n)
{
	if (n < 0)
		return (-1);
	else if (n == 0)
		return (1);
	else
		return (n * factorial(n - 1));
}
