#include "main.h"

/**
 * factorial - Returns the factorial of a given number.
 * @n: The number to find the factorial of.
 *
 * Return: if n > 0 - thr factorial of n.
 *  if n < 0 - 1 to indicate and error.
 */
int factorial(int n)
{
	int total = n;

	if (n < 0)
		return (-1);

	else if
		(n >= 0 && n <= 1)
			return (1);

	total *= factorial(n - 1);

	return (total);
}
