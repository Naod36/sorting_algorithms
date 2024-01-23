#include "sort.h"

/**
 * chang_pos - changes two positions of values in an array.
 * @a: The first integer.
 * @b: The second integer.
 */
void chang_pos(int *a, int *b)
{
	int holder;

	holder = *a;
	*a = *b;
	*b = holder;
}

/**
 * selection_sort - Sort an array of integers in ascending order
 *                  using the selection sort algorithm.
 * @array: An array of integers.
 * @size: The size of the array.
 *
 * Description: Print the array after each change.
 */
void selection_sort(int *array, size_t size)
{
	int *min;
	size_t i, j;

	if (array == NULL || size < 2)
		return;

	for (i = 0; i < size - 1; i++)
	{
		min = array + i;
		for (j = i + 1; j < size; j++)
			min = (array[j] < *min) ? (array + j) : min;

		if ((array + i) != min)
		{
			chang_pos(array + i, min);
			print_array(array, size);
		}
	}
}
