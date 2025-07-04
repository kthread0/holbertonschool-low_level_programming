#include "main.h"

/**
 *	_isdigit - entry point for function
 *	@c: value for digit
 *	Return: 0 if NOT digit, 1 if digit
 */

int _isdigit(int c)
{
	if (c >= '0' && c <= '9')
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
