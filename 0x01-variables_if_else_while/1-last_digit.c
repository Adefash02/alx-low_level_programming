#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/**
* main - This is a function
* Return: number to be generated
*/
/* more headers goes there */

/* betty style doc for function main goes there */
int main(void)
{
	int n;
	int m;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	/* your code goes there */
	m = n % 10;
	if (m > 5)
	{
	printf("last digit is %d is %d and is greater than 5\n", n, m);
	}
	else if (m < 6 && m != 0)
	{
	printf("last digit is %d is %d and is less than 6 but not 0\n", n, m);
	}
	else
	{
	printf("last digit is %d is %d and is 0\n", n, m);
	}
	return (0);
}
