#include <stdio.h>
/**
 * main - prints the alphabet in lowercase.
 *
 * Return: 0
 */
int main(void)
{
	char i = 'a';
	char k = 'A';

	while (i <= 'z')
	{
		putchar(i);
		i++;
	}
	while (k <= 'Z')
	{
		putchar(k);
		k++;
	}
	putchar('\n');
	return (0);
}
