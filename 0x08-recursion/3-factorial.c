#include "main.h"

/**
 * factorial - returns the factorial of a given number
 *
 * @n: int parameter
 *
 * Return: -1 or 1 or (n * factorial(n - 1))
 */
int factorial(int n)
{
	if (n <= 1)
	{
		if (n < 0)
		{
			return (-1);
		}
		else
		{
			return (1);
		}
	}
	else
	{
		return (n * factorial(n - 1));
	}
}
