#include <stdio.h>
#include "main.h"

/**
 * main - entry point
 *
 * Description: prints the number 1- 100 w/
 * Fizz for multiple of 3, Buzz for multiples of 5,
 * and FizzBuzz for multiple of both
 *
 * Return: Always 0
 */

int main(void)
{
	int i;

	for (i = 1; i <= 100; ++i)
	{
		if (i % 3 == 0 && i % 5 == 0)
		{
			printf("FizzBuzz");
		}
		else if (i % 3 == 0)
		{
			printf("Fizz");
		}
		else if (i % 5 == 0)
		{
			printf("Buzz");
		}
		else
		{
			printf("%d", i);
		}
		if (i < 100)
			putchar(' ');
		else
			putchar('\n');
	}

	return (0);
}
