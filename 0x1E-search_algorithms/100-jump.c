/*
 * File: 100-jump.c
 * Auth: Victor Kiriinya
 */

#include "search_algos.h"

/**
 * jump_search - Searches for a value in a sorted array of
 *		integers using jump search.
 * @array: This is a pointer to the first element of the array
 *	to be searched.
 * @size: The number of elements in the array.
 * @value: The value to search for.
 *
 * Return: If the value isn't present or the array is NULL, -1.
 *	Otherwise, the first index where the value is located.
 *
 * Descr: Prints a value everytime a cmparison is done in the array.
 *	It uses the square root of the array size as the jump step.
 */
int jump_search(int *array, size_t size, int value)
{
	size_t i, jump, step;

	if (array == NULL || size == 0)
		return (-1);

	step = sqrt(size);
	for (i = jump = 0; jump < size && array[jump] < value;)
	{
		printf("Value checked array[%ld] = [%d]\n", jump, array[jump]);
		i = jump;
		jump += step;
	}

	printf("Value found between indexes [%ld] and [%ld]\n", i, jump);

	jump = jump < size - 1 ? jump : size - 1;
	for (; i < jump && array[i] < value; i++)
		printf("Value checked array[%ld] = [%d]\n", i, array[i]);
	printf("Value checked array[%ld] = [%d]\n", i, array[i]);

	return (array[i] == value ? (int)i : -1);
}
