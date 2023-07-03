#include "main.h"

/**
 * _memset - fills memory with a constant byte
 *
 * @s: character parameter
 * @b: constant byte char parameter
 * @n: unsigned integer
 *
 * Return: memset(a, b, n)
 */
char *_memset(char *s, char b, unsigned int n)
{
	return (memset(s, b, n));
}
