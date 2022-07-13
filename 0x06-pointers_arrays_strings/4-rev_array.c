#include "main.h"
/**
 * reverse_array - concatenates two strings
 * @a: array
 * @n: number of elements in arr
 * Return: void
 */
void reverse_array(int *a, int n)
{
	int i = 0;

	while (i < n)
	{
		int t1 = a[i];

		int t2 = a[i - 1];

		a[i] = t2;
		a[n - 1] = t1;
		i++;
		n--;
	}
}
