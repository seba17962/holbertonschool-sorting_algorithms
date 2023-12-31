#include "sort.h"

/**
 * bubble_sort - the array to sorting
 * @array: the array to sort
 * @size: the size of the array
*/

void bubble_sort(int *array, size_t size)
{
	size_t i = 1, j = 0;
	int temp = 0;

	if (array == NULL || size == 0)
		exit(1);
	while (i != 0)
	{
		i = 0;
		for (j = 0; j < size; j++)
		{
			if (j != size - 1)
			{
				if (array[j] > array[j + 1])
				{
					temp = array[j];
					array[j] = array[j + 1];
					array[j + 1] = temp;
					i += 1;
					print_array(array, size);
				}
			}
		}
	}
}
