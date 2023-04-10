#include"main.h"

/**
 * main - program that adds positive numbers.
 * @argc: number of arguments
 * @argv: array of arguments
 *
 * Return: Always 0 (Success)
 **/

int main(int argc, char *argv[])
{
	int sum = 0;
	char *a;

	while (--argc)
	{
		for (a = argv[argc]; *a; a++)
			if (*a < 48 || *a > 57)
				printf("Error\n");
				return (1);
		sum += atoi(argv[argc]);
	}
	printf("%d\n", sum);
	return (0);
}
