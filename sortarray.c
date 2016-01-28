/* 
 * Sorting an array of numbers
 */

#include <stdio.h>
#include <stdlib.h>
#include "sorting.h"

int *array = NULL, array_size = 0;

int main(void)
{
	int i = 0;
	printf("How many numbers would you like to sort:\t");
	scanf("%d", &array_size);
	
	array = (int *)malloc(array_size * sizeof(int));

	printf("Enter the numbers:\t");
	for(i = 0; i < array_size; i++)
	{
		scanf("%d", &array[i]);
	}

	//bubble_sort(&array, &array_size);
	// selection_sort(&array, &array_size);
	insertion_sort(&array, &array_size);
 	display_array(&array, &array_size);

	free(array);
}

	


