#include "main.h"

/**
 * print_to_98 - prints all natural numbers from n to 98
 *
 * @n: Integer parameter
 */
void print_to_98(int n)
{
	int a;

	if (n < 98)
	{
		for (a = n; a <= 98; a++)
		{
			printf("%d", a);

			if (a < 98)
			{
				printf(", ");
			}
		}

		_putchar('\n');
	} else if (n > 98)
	{
		for (a = n; a >= 98; a--)
		{
			printf("%d", a);

			if (a > 98)
			{
				printf(", ");
			}
		}

		_putchar('\n');
	} else
	{
		printf("%d", n);
		_putchar('\n');
	}
}
