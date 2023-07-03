#include "main.h"

/**
 * _strncat - concatenates two strings
 *
 * @dest: charracter parameter to append to
 * @src: string parameter to append
 * @n: Integer parameter
 *
 * Return: strcat(dest, src, n)
 */
char *_strncat(char *dest, char *src, int n)
{
	return (strncat(dest, src, n));
}
