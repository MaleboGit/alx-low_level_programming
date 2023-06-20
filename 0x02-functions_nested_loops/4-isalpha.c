#include "main.h"

/**
 * _isalpha - Checks for alphabetic character
 *
 * @c: Character parameter
 *
 * Return: 1 or 0
 */
int _isalpha(int c)
{
	if (isalpha(c))
	{
		return (1);
	}

	return (0);
}
