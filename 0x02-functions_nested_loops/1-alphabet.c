#include "main.h"
/**
 * print_alphabet - Function to print lowercase letters
 * Description: prints alphabets in lowercase.
 * Return: Nothing.
 */

void print_alphabet(void)
{
	char ch = 'a';

	while (ch <= 'z')
	{

		_putchar (ch);
		ch++;
	}

	_putchar ('\n');
}
