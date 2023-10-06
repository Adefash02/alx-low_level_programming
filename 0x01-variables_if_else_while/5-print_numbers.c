#include <stdio.h>

/**
* main - case for lower and upper
* Return: Always 0.
*/

int main(void)
{
char upper;
for (upper = 'a'; upper <= 'z'; upper++)
{
if (upper != 'e' && upper != 'q')
putchar(upper);
}

putchar('\n');

return (0);
}
