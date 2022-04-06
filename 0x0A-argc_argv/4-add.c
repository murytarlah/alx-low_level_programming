#include "main.h"

/**
 * main - program that adds positive numbers.
 * @argc: number of command line arguments.
 * @argv: array that contains the program command line arguments.
 * Return: 0 - success.
 */

int main(int argc, char *argv[])
{
	int total = 0, count = argc - 1;

	while (count > 0)
	{
		for (int i = 0; argv[count][i] != '\0'; i++)
		{
			if (!isdigit(argv[count][i]))
			{
				printf("Error\n");
				return (1);
			}
		}
		total += atoi(argv[count])
		count--;
	}
	printf("%d\n", total);
	return (0);
}
