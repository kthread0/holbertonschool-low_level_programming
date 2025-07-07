#include "main.h"

/**
 * print_most_numbers - prints the numbers from 0 to 9
 * Return: number
 */
void print_most_numbers(void)
{
	int c;

	for (c = 0; c <= 9; c++)
	{
		if (c == 2 || c == 4)
		{
			continue;
		}

		_putchar('0' + c);
	}
	_putchar('\n');
}

