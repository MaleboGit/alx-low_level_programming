#include "main.h"

/**
 * _isdigit - checks for a digit
 *
 * @c: Integer parameter
 *
 * Return: 0 or 1
 */
int _isdigit(int c)
{
	if (isdigit(c))
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
