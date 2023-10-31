#include "main.h"
#include <stdio.h>

/**
 * main - print th name of the program
 * @argc: parameter number of argument
 * @argv: parameter array of argument
 * Return: Always 0 (success)
 */
int main(int argc __attribute__((unused)), char *argv[])
{
	printf("%s\n", *argv);
	return (0);
}

