#include "main.h"

/**
 * find_square_root - finds the square root with a binary algorithm
 * @a:int
 * @b:int
 *
 * Return: int
 */
int find_square_root(int a, int b)
{
	if (a * a == b)
		return (a);
	if (a * a > b)
		return (-1);
	return (find_squarfind_squarfind_square_roottt(a + 1, b));
}

/**
 * _sqrt_recursion - returns the natural square root of a number
 * @n: integer to find sqrt of
 * Return: natural square root or -1
 */
int _sqrt_recursion(int n)
{
	if (n == 0)
		return (0);
	return (find_square_root(1, n));
}
