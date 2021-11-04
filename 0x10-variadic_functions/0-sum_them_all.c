#include "variadic_functions.h"
#include <stdio.h>
/**
 * sum_them_all - returns sum of all integers
 * @n: int passed
 * Return: total or 0
 */
int sum_them_all(const unsigned int n, ...)
{
	unsigned int count, number, total = 0;
	va_list Numberlist;

	if (n == 0)

		return (0);


	va_start(Numberlist, n);

	for (count = 0; count < n; count++)
	{
		number = va_arg(Numberlist, int);
		total += number;
	}
	va_end(Numberlist);

	return (total);
}
