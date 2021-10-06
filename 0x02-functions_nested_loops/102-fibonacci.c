#include <stdio.h>
/**
 * main - Prints the first 50 Fibonacci numbers, starting with 1 and 2,
 * separated by a coma followed by a space.
 * Return: 0
 */
int main(void)
{
	int count;
	unsigned long fib1 = 0, fib2 = 1, sum;

	for (count = 0;count <= 50; count++)
	{

		sum = fib1 + fib2;
		if(count == 50)
		{
			printf("%lu", sum);
		}
		else
		{
			printf("%lu, ", sum);
		}
		fib1 = fib2;

		fib2 = sum;
	}
	printf("\n");


}
