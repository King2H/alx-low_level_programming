#include "main.h"
#include <stdio.h>
/**
 * print_to_98 - print all integers from given value to 98 (inclusive)
 * @num: The start of the range
 *
 * Return: void
 */
void print_to_98(int num)
{
	if (num == 98)
	{
		printf("%d\n", num);
	}
	else
	{
		printf("%d, ", num);
		print_to_98((num < 98) ? num + 1 : num - 1);
	}
}
