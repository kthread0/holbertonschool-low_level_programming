#include <stdio.h>

/**
 *	main - entry point
 *	Return: 0
 */

int main(void)
{
	int i = 0;

	for (i = 'a'; i <= 'z'; i++)
	{
		if (i != 'q' && i != 'e')
		{
			putchar(i);
		}
	}
	putchar('\n');
	return (0);
}
