#include <stdio.h>

/**
 *	main - entry point
 *	Return: 0
 */

int main(void)
{
	int i = 0;

	for (i = 'z'; i > 'a' - 1; i--)
	{
		putchar(i);
	}
	putchar('\n');
	return (0);
}
