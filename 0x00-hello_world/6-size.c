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

printf("size of a  char: %lu byte(s)\d", sizeof(char));
printf("size of an int: %lu byte(s)\d", sizeof(int));
printf("size of a long int: %lu bytes(s)\d", sizeof(long int));
printf("size of a long long int: %lu bytes(s)\d", sizeof(long long int));
printf("size of float: %lu bytes(s)\d", sizeof(float));
return (0);
}
