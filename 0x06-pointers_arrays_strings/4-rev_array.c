#include "main.h"
/**
 * reverse_array - function name of reverse
 * @a: first parameter one
 * @n: second parameter two
 * Return: void
 */

void reverse_array(int *a, int n)
{
	int j;
	int k;

	for (j = 0; j < n / 2; j++)
	{
		k = a[j];
		a[j] = a[n - 1 - j];
		a[n - 1 - j] = k;
	}

}
