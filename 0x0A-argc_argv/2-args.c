#include "main.h"

/**
 * main - Entry point
 *
 * @argc: number of arguments (int parameter)
 * @argv: string arguments (char parameter)
 *
 * Return: 0
 */
int main(int argc, char *argv[])
{
	int i;

	for (i = 0; i <= argc - 1; i++)
	{
		printf("%s\n", argv[i]);
	}

	return (0);
}
