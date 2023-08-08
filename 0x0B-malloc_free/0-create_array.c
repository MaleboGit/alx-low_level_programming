#include "main.h"

/**
 * create_array - creates an array of chars
 *
 * @size: size of memory to allocate
 * @c: array char element
 *
 * Return: NULL or memo
 */
char *create_array(unsigned int size, char c)
{
	char *memo = malloc(sizeof(char) * size);
	unsigned int i;

	for (i = 0; i < size; i++)
	{
		memo[i] = c;
	}

	if (size == 0 || memo == NULL)
	{
		return (NULL);
	}

	return (memo);
}
