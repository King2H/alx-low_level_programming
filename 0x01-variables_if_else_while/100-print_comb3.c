#include <stdio.h>
/**
 * main - Entry point
 * Description: Print combinations of two digit numbers in ascending order.
 * Return: (0) for success
 */

int main(void)
{
	int i;
	int j;

	for (i = 0; i < 9; i++)
	{
		for (j = i + 1; j < 10; j++)
		{
			putchar((i % 10) + '0');
			putchar((j % 10) + '0');

			if (i == 8 && j == 9)
				continue;
			
			putchar(',');
			putchar(' ');
		}
	}

	putchar('\n');

	return (0);
}
