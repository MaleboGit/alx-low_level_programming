#include "main.h"

/**
 * _islower - Checks for lowercase character
 *
 * @c: Character parameter
 *
 * Return: 1 or 0
 */
int _islower(int c)
{
	if (islower(c))
	{
		return (1);
	}

	return (0);
}
