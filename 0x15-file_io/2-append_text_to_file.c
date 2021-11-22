#include "main.h"
/**
 * append_text_to_file - appends text at the end of a line
 * @filename: pointer of string
 * @text_content: NULL terminated string
 *
 * Return: NULL if filename is empty, 1 if file exist
 *
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int x, idx;
	size_t count = 0;

	if (filename == NULL)
	{
		return (-1);
	}
	if (text_content == NULL)
	{
		return (1);
	}

	x = open(filename, O_APPEND | O_WRONLY, 00664);

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
