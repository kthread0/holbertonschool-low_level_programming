#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
*	main - entry point
*	Return:	number
*/

int main(void)
{
	int n = 0;

	srand(time(0));

	n = rand() - RAND_MAX / 2;
	if (n > 0)
	{
		printf("%d is positive\n", n);
	} else if (n < 0)
	{
		printf("%d is negative\n", n);
	}

	if (n == 0)
	{
		printf("%d is zero\n", n);
	}

	return (0);
}
