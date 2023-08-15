#include <stdio.h>
/**
  *main - Entry point
  *return: always 0 (SUCCESS)
 */
int main(void)
{ 
	printf("Size of a char: %d byte(s)", sizeof(char));
	printf("Size of an int: %d byte(s)", sizeof(int));
	printf("size of a long int: %d byte(S)", sizeof(long int));
	printf("size of a long long int: %d byte(s)", sizeof(long long int));
	printf("size of a float: %d byte(s)", sizeof(float));
	return (0);
}
