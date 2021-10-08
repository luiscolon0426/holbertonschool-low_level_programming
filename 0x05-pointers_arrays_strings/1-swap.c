#include "main.h"

/**
 * swap_int - Swaps the values of two
 * integers.
 * @a: The first integer t be swapped.
 * @b: the second integer to be swapped.
 */
void swap_int(int *a, int *b)
{
	int num = *a;
	*a = *b;
	*b = num;
}
