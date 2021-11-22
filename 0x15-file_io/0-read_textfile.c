#include "main.h"
/**
 * read_textfile
 *
 */
ssize_t read_textfile(const char *filename, size_t letters)
{

	int result = 0;
	int file;
	char *tmp;

	tmp = malloc(sizeof(char) * letters);

	if (tmp == NULL)
	{
		return (0);
	}

	if (filename == NULL)
	{
		return (0);
	}

	file = open("Requiescat", O_RDONLY);

	if (file == -1)
	{
		return (0);
	}

	result = read(file, tmp, letters);
	write(STDOUT_FILENO, tmp, result);


	free(tmp);
	close(file);
	return (result);
}
