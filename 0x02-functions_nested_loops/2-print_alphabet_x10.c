#include "main.h"

/**
 * print_alphabet_x10 - Prints 10 times the lowercase alphabets
 */
void print_alphabet_x10(void)
{
	int count = 0;

	while (count < 10)
	{
		char lower_alpha = 'a';

		while (lower_alpha <= 'z')
		{
			_putchar(lower_alpha);
			lower_alpha++;
		}
		_putchar('\n');

		count++;
	}
}
