/*
 * Bubble sort 
 */

#include <stdio.h>
#include "sorting.h"

void bubble_sort(int **t, int *array_size)
{
	int i,j, tmp;

	for(i = 0; i < *array_size; i++)
	{
		for(j = 0; j < *array_size - 1; j++)
		{
			if(*(*t + j) > *(*t + (j + 1)))
			{
				tmp = *(*t + j);
				 *(*t + j) = *(*t + (j + 1));
				*(*t + (j + 1)) = tmp;
			}
		}
	}
}

void selection_sort(int **t, int *array_size)
{
	int i, j, tmp;

	for(i = 0; i < *array_size; i++)
	{
		for(j = i; j < *array_size; j++)
		{
			if(*(*t + i) > *(*t + j))
			{
				tmp = *(*t + i);
				*(*t + i) = *(*t + j);
				*(*t + j) = tmp;
			}
		}
	}
}

void insertion_sort(int **t, int *array_size)
{
	int i, j, tmp;

	for(i = 1; i < *array_size; i++)
	{
		j = i;
		while(((*(*t + j)) < *(*t + (j - 1))) && j > 0)
		{
			tmp = *(*t + j);
			*(*t + j) = *(*t + (j -1));
			*(*t + (j - 1)) = tmp;
			j--;
		}
	}
}

void merging(int **t, int **a, int *mid, int **b, int *last);
{
	int i, j, k, tmp;
	i = j = k = 0;


}

void merge_sort(int **t, int *array_size)
{
	if(*array_size < 2) return ;

