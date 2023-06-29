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
	int n = (length_of_the_string - 1) - ((length_of_the_string - 1) / 2);

	for (i = n; i <= length_of_the_string - 1; i++)
	{
		_putchar(str[i]);
	}
	_putchar('\n');
}
