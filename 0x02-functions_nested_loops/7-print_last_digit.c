#include "main.h"
/**
 * print_last_digit - print the last digit of an integer
 * @num: Input number
 *
 * Return: The last digit of num.
 */
int print_last_digit(int num)
{
	num = num % 10;

	if (num < 0)
		num = -1 * num;

	_putchar('0' + num);
	return (num);
}
