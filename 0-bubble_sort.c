#include "sort.h"
/**
*bubble_sort - bubble sort algorithm
*@array: pointer to array to sort
*@size: number of elements
*/
void bubble_sort(int *array, size_t size)
{
size_t i, len = size;
short int check;
int tmp;

do {
	check = 0;
	for (i = 0; i < size; i++)
	{
		if (array[i] > array[i + 1])
		{
			tmp = array[i];
			array[i] = array[i + 1];
			array[i + 1] = tmp;
			check = 1;
			print_array(array, len);
		}
	}
} while (check > 0);

}
