#include <stdio.h>
/**
 * main - program that prints all single digit numbers of base 10
 *
 * Return: 0
*/

	int main(void)
{
	char a = '0';
	char b = 'a';

	while (a <= '9')
	{
		putchar(a);
		a++;
	}
		while (b < 'g')
	{
		putchar(b);
		b++;
	}
		putchar('\n');
	return (0);
}
