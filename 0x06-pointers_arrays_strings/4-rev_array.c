#include "main.h"
/**
 * reverse_array - concatenates two strings
 * @a: array
 * @n: number of elements in arr
 * Return: void
 */
void reverse_array(int *a, int n)
{
	int tmp;
	int *end = a + n - 1;

	while (a != end && n > 0)
	{
		tmp = *a;
		*a = *end;
		*end = tmp;
		if (a + 1 == end)
			break;
		a++;
		end--;
	}
}
