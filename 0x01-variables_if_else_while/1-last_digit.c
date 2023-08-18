#include <stdlib.h>
#include <stdio.h>
#include <time.h>

/**
* main - print the last digit of a randomly generated number
* and whether it's greater than 5, less than 6, or 0
* Return: Always 0
*/
int main(void)
{
int n;
    
    srand(time(0));
    n = rand() - RAND_MAX / 2;
    
    if ((n % 10) > 5)
    {
        printf("Last digit of %d is %d and is greater than 5\n", n, n);
    }
    else if (n == 0)
    {
        printf("Last digit of %d is %d and is 0\n", n, n);
    }
    else
    {
        printf("Last digit of %d is %d and is less than 6 and not 0\n", n, n);
    }

    return (0);
}