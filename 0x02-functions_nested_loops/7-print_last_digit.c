#include "main.h"

/**
 * print_last_digit - prints the last digit of a number
 *
 * @i: Integer parameter
 *
 * Return: last_digit
 */
int print_last_digit(int i)
{
	int last_digit = abs(i % 10);

	_putchar(last_digit + '0');

	return (last_digit);
}
