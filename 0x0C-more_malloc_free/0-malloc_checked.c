#include "main.h"

/**
 * malloc_checked - allocates memory using malloc
 * @b: the size to allocated
 *
 * Return:  a pointer to the allocated memory, exit(98) otherwise
 */

void *malloc_checked(unsigned int b)
{
	int *memory;

	memory = malloc(b);
	if (!memory)
	{
		exit(98);
	}
	return (memory);
}
