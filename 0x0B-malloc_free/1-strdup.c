#include "main.h"

/**
 * _strdup - returns a pointer to a newly allocated space
 *
 * @str: copy string
 *
 * Return: NULL or memo
 */
char *_strdup(char *str)
{
	char *memo = malloc(sizeof(char *));
	long unsigned int i;

	if (str == NULL || memo == NULL)
	{
		return (NULL);
	}

	for (i = 0; i < strlen(str); i++)
	{
		memo[i] = str[i];
	}

	return (memo);
}
