#include <stdio.h>
#include "main.h"

/**
 * print_array - a function that prints n elements of an array
 * @a: array of integers
 * @n: Number of elements Of the array to be printed
 * Return: void
 */
void print_array(int *a, int n)
{
	int j;

	for (j = 0; j < n; j++)
		printf("%d, ", a[j]);
		if (j != (n - 1))
			printf(", ");
	printf("\n");
}
