/* 
 * Function used to print out an array 
 */

#include <stdio.h>
#include "sorting.h"

void display_array(int **t, int *array_size)
{
	int i = 0;
	for(i = 0; i < *array_size; i++)
	{
		printf("%d ", *(*t + i));
	}
	putc('\n', stdout);
}
