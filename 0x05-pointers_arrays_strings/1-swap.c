#include "main.h"

/**
 * swap_int - swaps the values of two integers
 *
 * @a: Poiter variable to swap value
 * @b: Poiter variable to swap value
 */
void swap_int(int *a, int *b)
{
	int c;

	c = *a;
	*a = *b;
	*b = c;
}
