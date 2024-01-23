#include "sort.h"

/**
 * chang_pos - Changes position of values in the array
 *
 * @array: array to be changed
 * @first: first index
 * @second: second index
 */
void chang_pos(int **array, size_t first, size_t second)
{
	int holder;

	holder = (*array)[first];
	(*array)[first] = (*array)[second];
	(*array)[second] = holder;
}

/**
 * bubble_sort - sorting algorithm that sorts in the form
 * of a bubble
 *
 * @array: array to be sorted
 * @size: size of the array
 */
void bubble_sort(int *array, size_t size)
{
	size_t i, j, flag;

	if (size < 2)
		return;

	for (i = 0; i < size; i++)	
	{
		flag = 0;
		for (j = 0; j < size - i - 1; j++)
		{
			if (array[j] > array[j + 1])
			{
				chang_pos(&array, j, j + 1);
				print_array(array, size);
				flag = 1;
			}
		}

		/* check if no swap occurred */
		if (!flag)
			break;
	}
}
