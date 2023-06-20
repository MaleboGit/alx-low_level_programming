#include "main.h"

void print_alphabet(void)
{
	char lower_alpha = 'a';

	while (lower_alpha <= 'z')
	{
		_putchar(lower_alpha);
		lower_alpha++;
	}
	_putchar('\n');
}
