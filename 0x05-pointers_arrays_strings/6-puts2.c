#include "main.h"

/**
 * puts2 - prints every other character of a string
 *
 * @str: String lateral
 */
void puts2(char *str)
{
	int i;
	int length = strlen(str);

	for (i = 0; i <= length - 1; i += 2)
	{
		_putchar(str[i]);
	}
	_putchar('\n');
}
