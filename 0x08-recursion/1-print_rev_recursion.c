#include "main.h"

/**
 * _print_rev_recursion - prints a string in reverse
 *
 * @s: char parameter
 */
void _print_rev_recursion(char *s)
{
	int i;
	int length = strlen(s);

	for (i = length; i >= 0; i--)
	{
		_putchar(s[i]);
	}
}
