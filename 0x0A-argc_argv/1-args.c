#include"main.h"

/**
 * main - A program that prints the number of arguments passed into it.
 * @argc: The number of command-line arguments
 * @argv: Array of arguments
 *
 * Return: Always 0 (Success)
 */

int main(int argc, char *argv[])
{
	(void)argv;

	printf("%d\n", argc - 1);
	return (0);
}
