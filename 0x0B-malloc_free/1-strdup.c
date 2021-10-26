#include "main.h"
#include <stdlib.h>

/**
 * _strdup - returns a  pointer to newly allocated
 * spaces in memory that copies string given as a parameter.
 * @str: points to the string.
 *
 * Return: characters.
 */
char *_strdup(char *str)
{
	int index, index2;
	char *n;

	if (str == NULL)
	{
		return (NULL);
	}
	for (index = 0; str[index] != '\0'; index++)

		n = malloc((index + 1) * sizeof(char));

	if (n == NULL)
	{
		return (NULL);
	}
	for (index2 = 0; index2 < index; index2++)
	{
		n[index2] = str[index2];
	}
	n[index2] = '\0';
	return (n);

}
