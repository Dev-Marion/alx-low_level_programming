#include <stdio.h>

/**
 * main - Entry point, prints the first 98 Fibonacci numbers
 *
 * Return: Always 0
 */
int main(void)
{
	int counter = 0;

	unsigned long first = 0;

	unsigned long second = 1;

	unsigned long fib;

	while (counter <= 94)
	{
		fib = first + second;

		if (counter < 94)
		{
			printf("%lu, ", fib);
		}

		else
		{
			printf("%lu", fib);
		}

		first = second;

		second = fib;

		counter++;
	}
	printf("\n");

	return (0);
}
