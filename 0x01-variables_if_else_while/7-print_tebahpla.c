#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (success)
 */
int main(void)
{
	char lower_alpha = 'z';

	while (lower_alpha >= 'a')
	{
		putchar(lower_alpha);
		lower_alpha--;
	}

	putchar('\n');

	return (0);
}
