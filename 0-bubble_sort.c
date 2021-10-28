#include <stdio.h>
#include "sort.h"

/* A function to implement bubble sort */

void bubble_sort(int *array, size_t size);

{
	int i, j;
	for (i = 0; i < n - 1; i++)


/* Last i elements are already in place */
		for (j = 0; j < n - i - 1; j++)
			if (arr[j] > arr[j + 1])
				swap(&arr[j], &arr[j + 1]);
}

/* test */

int main()
{
    int arr[] = {64, 34, 25, 12, 22, 11, 90};
    int n = sizeof(arr)/sizeof(arr[0]);
    bubbleSort(arr, n);
    printf("Sorted array: \n");
    printArray(arr, n);
    return 0;
}
