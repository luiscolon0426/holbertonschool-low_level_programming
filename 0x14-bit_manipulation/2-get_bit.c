#include "main.h"
/**
 * get_bit - value of a bit at a given
 * index
 * @n: number
 * @index:index of bit
 *
 * Return: -1 or bit
 */
int get_bit(unsigned long int n, unsigned int index)
{
	int idx;

	if (index > 32)
		return (-1);

	idx = n >> index;

	return (idx & 1);
}
