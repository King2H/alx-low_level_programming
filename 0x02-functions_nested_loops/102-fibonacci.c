#include <stdio.h>

/**
 * main - entry point
 *
 * Return: Always 0.
 */
int main(void)
{
	int i;
	long int x = 1;
	long int y = 2;

	for (i = 0; i < 50; ++i)
	{
		printf("%ld", x);
		if (i < 49)
		{
			y += x;
			x = y - x;
			printf(", ");
		}
	}

	putchar('\n');

	return (0);
}
