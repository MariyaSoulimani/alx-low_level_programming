#include "main.h"
/**
 * print_alphabet_x10 - prints 10 times the alphabet, in lowercase
 *
 * Return: void
 */
void print_alphabet_x10(void)
{
int letter = 97;
int i = 0;

	while (i < 10)
{
	while (letter <= 122)
	{
		_putchar (letter);
		letter++;
	}
	i++;
	letter = 'a';
	_putchar ('\n');
}
}
