#include <stdio.h>

/**
 * main - Prints the program name, followed by anew line.
 * @argc: The number of aguments supplied to the program.
 * @argv: An array of pointers to the argument.
 * Return: 0
 */

int main(int argc, char *argv[])
{
	argc++;
	argc--;
	printf("%s\n,", argv[0]);

	return (0);
}
