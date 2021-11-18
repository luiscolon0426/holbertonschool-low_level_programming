#include "main.h"
/**
 * binary_to_uint - converts binary to
 * unsigned int
 * @b: string
 *
 * Return: converted number, 0 instead
 */
unsigned int binary_to_uint(const char *b)
{
	unsigned int i = 0;
	int len;
	unsigned int val = 0;


	if (b == NULL)
		return (0);

	for (len = 0; b[len] != '\0'; len++)
	{
		if (b[len] != '0' && b[len] != '1')
		{
			return (0);
		}
	}

	while (b[i] == '0' || b[i] == '1')
	{
		val <<= 1;
		val += b[i] - '0';
		i++;
	}

	return (val);
}
