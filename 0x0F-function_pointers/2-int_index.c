#include "function_pointers.h"

/**
 * int_index - searches for an integer.
 * @array: the array to search in
 * @size: the size of the array
 * @cmp: the pointer to function used to find the integer
 * Return: return -1 if size <= 0 or if array is NULL
 * or cmp is NULL, index of integer otherwise.
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int i;

	if (array == NULL || size <= 0 || cmp == NULL)
		return (-1);

	for (i = 0; i < size; i++)
	{
		if (cmp(array[i]))
			return (i);
	}
	return (-1);
}
