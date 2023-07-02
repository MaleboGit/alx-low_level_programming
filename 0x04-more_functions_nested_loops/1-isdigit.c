#include "main.h"

/**
 * _isdigit - checks for a digit
 *
 * @c: Integer parameter
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
