#include "main.h"
/**
* print_most_numbers - entry point
* Description: Prints single digit nums, exclude 2 & 4.
* Return: void
*/
void print_most_numbers(void)
{
	int num;

	for (num = '0'; num <= '9'; num++)
	{
		if (num == '2' || num == '4')
			continue;
		else
			_putchar(num);
	}

	_putchar('\n');
}
