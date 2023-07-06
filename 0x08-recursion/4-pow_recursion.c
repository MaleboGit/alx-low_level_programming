#include "main.h"

/**
 * _pow_recursion -  returns the value of x raised to the power of y
 *
 * @x: int parameter
 * @y: int parameter
 *
 * Return: -1 or 1 or (_pow_recursion(x, y - 1))
 */
int _pow_recursion(int x, int y)
{
	if (y <= 0)
	{
		if (y < 0)
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
		return (x * _pow_recursion(x, y - 1));
	}
}
