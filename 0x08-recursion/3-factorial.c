/**
 * factorial - the factorial
 *
 * @n: int parameter
 *
 * Return: (-1) or (1) or (n * factorial(n - 1);
 */
int factorial(int n)
{
	if (n < 0)
	{
		return (-1);
	}
	else if (n == 0)
	{
		return (1);
	}
	else
	{
		return (n * factorial(n - 1));
	}
}
