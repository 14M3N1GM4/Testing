/* 
 * Merge sort
 */

#include <stdio.h>
#include <stdlib.h>

int *t = NULL;

void merging(int *t, int *a, int size_array_1, int *b, int size_array_2)
{
	int i, j, k;
	i = j = k = 0;

	while(i < size_array_1 && j < size_array_2)
	{
		if(a[i] <= b[j])
		{
			t[k] = a[i];
			i++;
			k++;
		}
		else
		{
			t[k] = b[j];
			j++;
			k++;
		}
	}

	/* if any elements remain in either subarray append 
	 * append them to the main array
	 */
	 while(i < size_array_1)
	 {
		 t[k] = a[i];
		 i++;
		 k++;
	 }
	 while(j < size_array_2)
	 {
		 t[k] = b[j];
		 j++;
		 k++;
	 }
}

void merge_sort(int *t, int array_size)
{
	int mid = array_size / 2;

	if(array_size < 2) return;

	int *a, *b, size_array_1, size_array_2;
	size_array_1 = mid; 
	size_array_2 = array_size - mid;

	a = (int *)malloc(size_array_1 * sizeof(int));
	b = (int *)malloc(size_array_2 * sizeof(int));

	// copy values into the created arrays
	for( int i = 0; i < mid; i++)
	{
		a[i] = t[i];
	}
	for( int i = 0; i < size_array_2; i++)
	{
		b[i] = t[i + mid];
	}

	merge_sort(a, size_array_1);
	merge_sort(b, size_array_2);
	merging(t, a, size_array_1, b, size_array_2);

	free(a);
	free(b);
}

void display_array(int *t, int array_size)
{
	int i;
	for(i = 0; i < array_size; i++)
	{
		printf("%d ", t[i]);
	}
	putc('\n', stdout);
}

int main()
{
	int i = 0;
	int array_size = 0;
	printf("How many numbers would you like to sort:\t");
	scanf("%d", &array_size);

	t = (int *)malloc(array_size * sizeof(int));
	printf("Enter the numbers you would like to sort:\t");
	for(i = 0; i < array_size; i++)
	{
		scanf("%d", &t[i]);
	}

	merge_sort(t, array_size);
	display_array(t, array_size);
	free(t);

	return 0;
}
