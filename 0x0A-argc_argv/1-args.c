#include "main.h"

/**
 * main - prints the number of arguments passed followed by a newline
 * @agrc: number of command line arguments.
 * @argv: array that contains the program command line arguments.
 * return: 0 - success
 */

int main(int agrc, char *argv[])
{
	printf("%d\n", argc-1);
	return 0;
}
