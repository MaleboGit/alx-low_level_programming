#include "main.h"

/**
 * puts_half - prints half of a string
 *
 * @str: string lateral
 */
void puts_half(char *str)
{
	int i;
	int length_of_the_string = strlen(str);
	int n = (length_of_the_string - 1) / 2;
	int n2 = (length_of_the_string - 1) - n;

	if ((length_of_the_string) % 2 == 0)
	{
		for (i = n2; i <= length_of_the_string - 1; i++)
		{
			if (length_of_the_string == 0)
			{
				break;
			}
			_putchar(str[i]);
		}
	} else
	{
		for (i = n2 + 1; i <= length_of_the_string - 1; i++)
		{
			_putchar(str[i]);
		}
	}
	_putchar('\n');
}
