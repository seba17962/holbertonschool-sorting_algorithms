#include "sort.h"

/**
* swap - swaps two integers.
* @i: integer 1 to swap.
* @j: integer 2 to swap.
*/

void swap(int *i, int *j)
{
	int tmp = *i;
	*i = *j;
	*j = tmp;
}

/**
* lomutoscheme - partition scheme for the quick sort algorithm.
* @array: array to be sorted.
* @size: size of the array.
* @low: first element of the array.
* @high: last element of the array.
* Return: final position of pivot.
*/

int lomutoscheme(int *array, int low, int high)
{
int i = low - 1, j;
int pivot = array[high];

for (j = low; j <= high - 1; j++)
{
	if (array[j] < pivot)
	{
		i++;
		swap(&array[i], &array[j]);
	}
}
swap(&array[i + 1], &array[high]);
return i + 1;
}

/**
 * quick_sort - sorts in ascending order using the Quick sort algorithm.
 * @array: array to sort.
 * @size: size of the array.
*/

void quick_sort(int *array, size_t size)
{
int low = 0, high = size - 1, index;

if (array == NULL || size < 2)
	return;
if (low < high)
{
	index = lomutoscheme(array, low, high);

	quick_sort(array, index);
	quick_sort(array + index + 1, high - index);
}	
}
