#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (success)
 */
int main(void)
{
	int num = 0;
	char lower_alpha = 'a';

	while (num <= 9)
	{
		putchar(num + '0');
		num++;
	}

	while (lower_alpha <= 'f')
	{
		putchar(lower_alpha);
		lower_alpha++;
	}

	putchar('\n');

	return (0);
}
