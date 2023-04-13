/*
 * File: 0-linear.c
 * Auth: Victor Kiriinya
 */

#include "search_algos.h"

/*
 * @linear_search: Searches for a value in an array of
 *		integers using linear search.
 * @array: This is a pointer to the first element of the
 *	array to be searched.
 * @size: The number of elements in the array.
 * @value: Value being searched.
 *
 * Return: If the value isn't present or the array is NULL, -1.
 *	Otherwise, the first index where the value is located.
 *
 * Output: Prints a value every time comparison is done in the
 *	array.
 */
int linear_search(int *array, size_t size, int value)
{
	size_t i;

	if (array == NULL)
		return (-1);

	for (i = 0; i < size; i++)
	{
		printf("Value checked array[%ld] = [%d]\n", i, array[i]);
		if (array[i] == value)
			return (i);
	}

	return (-1);
}
