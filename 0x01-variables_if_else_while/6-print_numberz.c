#include <stdio.h>
/**
 * main - Entry point
 * Description: Print all positive single digits numbers of base.
 * Return: (0) for success
 */

int main(void)
{
	int num;

	for (num = 48; num <= 57; num++)
	{
		putchar(num);
	}
	putchar('\n');

	return (0);
}
