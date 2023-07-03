#include "main.h"

/**
 * _memcpy - copies memory area
 *
 * @dest: memory area to carry a copy (char parameter)
 * @src: memory area to copy from (char parameter)
 * @n: bytes copied (unsigned int parameter)
 *
 * Return: memcpy(dest, src, n)
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	return (memcpy(dest, src, n));
}
