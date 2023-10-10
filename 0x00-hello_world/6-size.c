#include <stdio.h>

/**
* main - This is size of various computer type
* Return: Always 0 (success)
**/
int main(void)
{
	char a;
	int b;
	long c;
	long long int d;
	float f;

printf("size of a  char: %lu byte(s)\n", (unsigned long)sizeof(a));
printf("size of a int: %lu byte(s)\n", (unsigned long)sizeof(b));
printf("size of a long int: %lu bytes(s)\n", (unsigned long)sizeof(c));
printf("size of a long long int: %lu bytes(s)\n", (unsigned long)sizeof(d));
printf("size of float: %lu bytes(s)\n", (unsigned long)sizeof(f));
return (0);
}
