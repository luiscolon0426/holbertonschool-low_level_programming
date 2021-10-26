#include "main.h"
#include <stdlib.h>

/**
 * create_array - Creates an array of chars, and initializes it with a specific char.
 * @size - size of array.
 * @c - character that goes in the array.
 *
 * Return: NULL if the size is 0, otherwise return the pointer to the array, or NULL if
 * it fails
 */
char *create_array(unsigned int size, char c)
{
	unsigned int  idx;
	char *str;

	if(size == 0)
	{
		return(NULL);
	}

	str = malloc (size * (sizeof(char)));
	if (str == NULL)
	{
		return(NULL);
	}
	idx = 0;
	while(idx < size)
	{
		str[idx] = c;
		idx++;
	}
	return (str);

}
