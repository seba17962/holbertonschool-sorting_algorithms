#include "sort.h"

/**
 * bubble_sort - the array to sorting
 * @size: the size of the array
*/

void bubble_sort(int *array, size_t size)
{
	size_t i = 0, j = 0;
	int temp = 0;

	for (i = 0; i < size; i++)
	{
		for (j = 0; j < size; j++)
		{
			if (array[i] > array[i + 1])
			{
				temp = array[i];
				array[i] = array[i + 1];
				array[i + 1] = temp;
			}
		}
		print_array(array, size);
	}
}
