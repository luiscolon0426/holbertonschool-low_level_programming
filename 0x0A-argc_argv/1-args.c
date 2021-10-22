#include <stdio.h>

/**
 * main - Prints all arguments it receives.
 * @argc: The number of arguments supplied to the program.
 * @argv: An array of pointers to the argument.
 *
 * Return: 0
 */
int main(int argc, char *argv[])
{
	int i;

	argv++;
	argv--;

	for (i = 0; i < argc - 1; i++)
		;

	printf("%d\n", i);

	return (0);
}
