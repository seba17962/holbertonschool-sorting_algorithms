#include "sort.h"

/**
 *	selection_sort - selection sort style
 *
 *	@array: array of ints to sort
 *	@size: size of array
*/

void selection_sort(int *array, size_t size)
{
	size_t count_1, count_2, change;
	int temp = 0;

	if (!array || size == 0)
		exit(1);

	for (count_1 = 0; count_1 < (size - 1); count_1++)
	{
		change = count_1;
		for (count_2 = count_1; count_2 < size; count_2++)
			if (array[count_2] < array[change])
				change = count_2;

		if (change != count_1)
		{
			temp = array[count_1];
			array[count_1] = array[change];
			array[change] = temp;
			print_array(array, size);
		}
	}
}
