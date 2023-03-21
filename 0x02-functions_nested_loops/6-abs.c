#include "main.h"
/**
  * _abs - computes the absolute value of an integer.
  * @n: the number to be checked
  *
  * Return: the absolute value.
  */
int _abs(int n)
{
	int num = n;

	if (n < 0)
		return (num * -1);
	else
		return (num);
}
