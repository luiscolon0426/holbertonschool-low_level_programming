#include "main.h"

/**
 * clear_bit - returns value of a bit at a given index
 * @n: number passed
 * @index: index
 * Return: 1 or -1
 */
int clear_bit(unsigned long int *n, unsigned int index)
{

	unsigned long int newNumber;

	if (index > sizeof(unsigned long int) * 8)
	{
		return (-1);
	}

	newNumber = 1 << index;
	*n = (*n & (~(newNumber)));

	return (1);
}
