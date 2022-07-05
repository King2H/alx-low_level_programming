#include "main.h"
/**
 * print_sign - print the sign of a numeric value
 * @num: The value to test
 *
 * Return: 1 if num is positive.
 * -1 if num is negative.
 *  Otherwise 0.
 */
int print_sign(int num)
{
	if (num > 0)
	{
		_putchar('+');
		return (1);
	}
	else if (num < 0)
	{
		_putchar('-');
		return (-1);
	}
	else
	{
		_putchar('0');
		return (0);
	}
}
