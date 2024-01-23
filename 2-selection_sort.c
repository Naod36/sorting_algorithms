#include "sort.h"

/**
 * change_pos - Changes position of values in the array
 *
 * @array: array to be changed
 * @first: first index
 * @second: second index
 */
void change_pos(int **array, size_t first, size_t second)
{
	int holder;

	holder = (*array)[first];
	(*array)[first] = (*array)[second];
	(*array)[second] = holder;
}

/**
 * selection_sort - uses the selection algorithm to sort
 * the array
 *
 * @array: an array to be sorted
 * @size: size of the array
 */
void selection_sort(int *array, size_t size)
{
	size_t i, j;
	int min_val, min_index, flag;

	if (size < 2)
		return;

	for (i = 0; i < size; i++)
	{
		min_val = array[i];
		min_index = i;
		flag = 0;

		for (j = i + 1; j < size; j++)
		{
			if (min_val > array[j])  
			{
				min_val = array[j];
				min_index = j;
				flag = 1;
			}
		}

		if (flag)
		{
			change_pos(&array, i, min_index);
			print_array(array, size);
		}
	}
}}
