#include <stdio.h>

/**
 *	main - entry point
 *	Return: 0
 */

int main(void)
{
	int i = 0;

	for (i = 48; i < 58; i++)
	{
		putchar(i);
	}

	for (i = 97; i < 103; i++)
	{
		putchar(i);
	}

	putchar('\n');
	return (0);
}
