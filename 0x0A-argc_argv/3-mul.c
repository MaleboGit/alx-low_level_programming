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
	if (argc >= 3)
	{
		printf("%d\n", argv[2] * argv[3]);
	}
	else
	{
		printf("Error\n");

		return (1);
	}

	return (0);
}
