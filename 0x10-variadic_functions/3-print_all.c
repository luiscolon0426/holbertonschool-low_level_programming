#include <stdarg.h>
#include <stdio.h>

/**
 * print_all - function prints anything
 * @format: data types
 * Return: nothing:
 */
void print_all(const char * const format, ...)
{
	int count2 = 0;
	va_list printList;
	char *string, *comma = "";

	if (format == NULL)
	{

	}
