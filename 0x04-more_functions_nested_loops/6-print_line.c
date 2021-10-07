#include "main.h"

/**
 * print_line - Draws a straight line using the character _.
 * @n: The number of _ characters to be printed.
 */
void print_line(int n)
{
	int linea;

	if (n > 0)
	{
		for (linea = 0; linea < n; linea++)
			_putchar('_');
	}
	_putchar('\n');
}
