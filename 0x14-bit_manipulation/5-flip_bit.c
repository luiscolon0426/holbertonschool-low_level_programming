#include "main.h"

/**
 * flip_bits - returns number of bits you would need to flip to get
 * from one number to another
 * @n: 1 decimal number
 * @m: 2nd decimal number
 *
 * Return: number of bits
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int flipBit = 0, bitNumber = 0;

	flipBit = n ^ m;

	while (flipBit > 0)
	{
		if ((flipBit & 1) == 1)
			bitNumber++;

		flipBit >>= 1;
	}

	return (bitNumber);
}
