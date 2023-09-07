#include "sort.h"

/**
 * insertion_sort_list - to do insertion sort
 * @list: the list
 *
 * Return: nothing
 */
void insertion_sort_list(listint_t **list)
{
	listint_t *temp_1 = NULL;
    listint_t *temp_2 = NULL;
    listint_t * prev = NULL;

	if (list == NULL)
		exit(98);

	temp_1 = (*list);

	/* start from index 1 */
	while (temp_1->next != NULL)
	{
		temp_1 = temp_1->next;
		temp_2 = temp_1;

		while ((temp_2->prev != NULL) && (temp_2->prev->n > temp_2->n))
		{
			prev = temp_2->prev;

			temp_2->prev = prev->prev;
			prev->next = temp_2->next;

			if (temp_2->next != NULL)
				temp_2->next->prev = prev;

			if (prev->prev != NULL)
				prev->prev->next = temp_2;
			else
				*list = temp_2;

			temp_2->next = prev;
			prev->prev = temp_2;

			print_list(*list);
		}
	}
}
