#include "sort.h"

/**
 * swap - swap elements of an array
 * * @array: array of integer
 * @size: size of an array
 * @a: int
 * @b: int
 */

void swap(int *array, size_t size, int *a, int *b)
{
	if (a != b)
	{
		int aux;

		aux = *a;
		*a = *b;
		*b = aux;
		print_array(array, size);
	}
}

/**
 * partition - Lomuto partition
 * @array: array of integer
 * @min: lower int to compare
 * @max: higer int to compare
 * @size: size of an array
 *
 * Return: integer
*/

int partition(int *array, int min, int max, size_t size)
{
	int piv = array[max];
	int j = min - 1, i;

	for (i = min; i <= max - 1; i++)
	{
		if (array[i] <= piv)
		{
			j++;
			swap(array, size, &array[i], &array[j]);
		}
	}
	swap(array, size, &array[j + 1], &array[max]);
	return (j + 1);
}

/**
 * quick_recursive - recursive function
 * @array: array of integers
 * @min: int
 * @max: int
 * @size: size of an array
*/

void quick_recursive(int *array, int min, int max, size_t size)
{
	int a;

	if (min < max)
	{
		a = partition(array, min, max, size);
		quick_recursive(array, min, a - 1, size);
		quick_recursive(array, a + 1, max, size);
	}
}

/**
 * quick_sort - Algorithm to sort an array of int
 * @array: The array of integers
 * @size: Size of an array
*/

void quick_sort(int *array, size_t size)
{
	if (!array || size == 0)
		return;
	quick_recursive(array, 0, size - 1, size);
}
