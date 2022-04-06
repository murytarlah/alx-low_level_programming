#include "main.h"

/**
 * main - program that adds positive numbers.
 * @argc: number of command line arguments.
 * @argv: array that contains the program command line arguments.
 * Return: 0 - success.
 */

int main(int argc, char *argv[])
{
	if (argc == 1)
	{
		printf("%d\n", 0);
		return (0);
	}
	else
	{
		int total = 0;

		int no = argc - 1;

		while (no > 1)
		{
			for (int i = 0; argv[argc][i] != '\0'; i++)
			{

				if (!isdigit(argv[argc][i]))
				{
					printf("Error\n");
					return (1);
				}
				total += argv[argc]
			}
			no--;
		}
		printf("%d\n", total);
		return (0);
	}
}
