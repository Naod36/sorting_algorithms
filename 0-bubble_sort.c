#include "sort.h"

/**
 * chang_pos - Changes two positions of values in an array.
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
 * bubble_sort - Sorts an array of integers as a bubble.
 * @array: An array of integers to be sorted.
 * @size: The size of the array to be sorted.
 *
 * Description: Prints the array after each position change.
 */
void bubble_sort(int *array, size_t size)
{
	size_t i, len = size;
	bool bubbly = false;

	if (array == NULL || size < 2)
		return;

	while (bubbly == false)
	{
		bubbly = true;
		for (i = 0; i < len - 1; i++)
		{
			if (array[i] > array[i + 1])
			{
				chang_pos(array + i, array + i + 1);
				print_array(array, size);
				bubbly = false;
			}
		}
		len--;
	}
}
