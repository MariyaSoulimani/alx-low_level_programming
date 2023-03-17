#include <stdio.h>
/**
 * main - prints all single digit numbers
 *
 * Return: 0
*/

	int main(void)
{

	int x;

	for (x = 48; x <= 57; x++)
{
	putchar(x);
	if (x != 57)
	{
	putchar(',');
	putchar(' ');
	}
}
	putchar('\n');
	return (0);
}
