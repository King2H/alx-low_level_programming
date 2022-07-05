#include <stdio.h>

/**
 * main - entry point
 *
 * Return: Always 0.
 */
int main(void)
{
	int x = 1;
	int y = 2;
	long int sum = 0;

	do {
		if (y % 2 == 0)
			sum += y;
		y += x;
		x = y - x;
	} while (y <= 4000000);

	printf("%ld\n", sum);

	return (0);
}
