#include "variadic_functions.h"

/**
 * print_strings - prints strings, followed by a new line
 * @separator: th separator string
 * @n: the number of parameters
 */
void print_strings(const char *separator, const unsigned int n, ...)
{

	va_list arg;
	char *str;
	unsigned int i;

	va_start(arg, n);

	for (i = 0; i < n; i++)
	{
		if (i + 1 != n && separator != NULL)
			printf("%s%s", (str = va_arg(arg, char *)) ? str : "(nil)", separator);
		else
			printf("%s", va_arg(arg, char));
	}
	va_end(arg);
	printf("\n");
}
