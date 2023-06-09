#include "3-calc.h"

/**
 * op_add - adds two integers
 * @a: the first integer
 * @b: the second integer
 * Return: the result of a + b
 */
int op_add(int a, int b)
{
	return (a + b);
}

/**
 * op_sub - substructs two integers
 * @a: the first integer
 * @b: the second integer
 * Return: the result of a - b
 */
int op_sub(int a, int b)
{
	return (a - b);
}

/**
 * op_mul - multiplies two integers
 * @a: the first integer
 * @b: the second integer
 * Return: the result of a * b
 */
int op_mul(int a, int b)
{
	return (a * b);
}

/**
 * op_div - computes a / b
 * @a: the first integer
 * @b: the second integer
 * Return: the result of a / b
 */
int op_div(int a, int b)
{
	if (b == 0)
	{
		printf("Error\n");
		exit(100);
	}
	return (a / b);
}

/**
 * op_mod - computes a % b
 * @a: the first integer
 * @b: the second integer
 * Return: the result of a / b
 */
int op_mod(int a, int b)
{
		if (b == 0)
		{
			printf("Error\n");
			exit(100);
		}
		return (a % b);
}
