#include "main.h"
#include <stdlib.h>

/**
 * create_array - Creates an array of chars, and initializes it with
 * a specific char.
 * @size:  size of array.
 * @c: character that goes in the array.
 *
 * Return: character
 */
char *create_array(unsigned int size, char c)
{
	unsigned int  idx;
	char *str;

	if (size == 0)
	{
		return (NULL);
	}

	str = malloc(size * sizeof(char));
	if (str == NULL)
	{
		return (NULL);
	}
	idx = 0;
	while (idx < size)
	{
		str[idx] = c;
		idx++;
	}
	return (str);

}
