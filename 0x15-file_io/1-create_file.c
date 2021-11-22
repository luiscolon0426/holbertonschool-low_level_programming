#include "main.h"
/**
 * create_file - creates a file
 * @filename: name of file to create
 * @text_content: creates an empty file if NULL
 *
 * Return: 1
 */
int create_file(const char *filename, char *text_content)
{
	int x, idx;
	size_t count = 0;

	if (filename == NULL)
	{
		return (-1);
	}

	if (text_content == NULL)
	{
		x = open(filename, O_CREAT, 00600);
		if (x ==  -1)
			return (-1);
		return (1);
	}
	x = open(filename, O_CREAT | O_RDWR | O_TRUNC, 00600);
	if (x == -1)
	{
		return (-1);
	}

	idx = 0;
	while (text_content[idx])
	{
		idx++;
		count++;
	}

	write(x, text_content, count);

	close(x);
	return (1);
}
