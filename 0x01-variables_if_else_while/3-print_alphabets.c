#include <stdio.h>

/**
* main - both capital and small letter function
* Return: Always Zero
*/

int main(void)
{
char i;

for (i = 'a'; i <= 'z'; i++)
putchar(i);

for (i = 'A'; i <= 'Z'; i++)
putchar(i);
putchar('\n');

return (0);
}
