#include "main.h"
/**
 * main - program taht copies the content of a file to
 * another file
 * @argc: number of elements for argv
 * @argv: string
 * Return: 0
 */
int main(int argc, char *argv[])
{
	int fd_1, fd_2;
	int re, c_1, c_2;
	char buffer[BUFSIZ];

	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
		exit(97);
	}
	fd_1 = open(argv[1], O_RDONLY);
	if (fd_1 < 0)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]);
		exit(98);
	}
	fd_2 = open(argv[2], O_TRUNC | O_CREAT | O_WRONLY, 0664);
	while ((re = read(fd_1, buffer, BUFSIZ)) > 0)
	{
		if (fd_2 < 0 || (write(fd_2, buffer, re) != re))
		{
			dprintf(STDERR_FILENO, "Error: Can't write to %s\n", argv[2]);
			exit(99);
		}
	}
	if (re < 0)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]);
		exit(98);
	}
	c_1 = close(fd_1);
	if (c_1 < 0)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %i\n", fd_1);
		exit(100);
	}
	c_2 = close(fd_2);
	if (c_2 < 0)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %i\n", fd_2);
		exit(100);
	}
	return (0);
}
