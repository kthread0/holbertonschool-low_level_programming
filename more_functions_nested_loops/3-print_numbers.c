#include "main.h"

/**
 * print_numbers - prints the numbers from 0 to 9, followed by a new line
 *
 * Description: This function prints digits 0 through 9 in sequence
 *
 * Return: void
 */
void print_numbers(void)
{
	int digit;

	for (digit = 0; digit <= 9; digit++)
	{
		_putchar(digit + '0');
	}

	_putchar('\n');
}
