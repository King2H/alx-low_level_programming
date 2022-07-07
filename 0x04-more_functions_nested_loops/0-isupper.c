#include "main.h"

/**
 * _isupper - define whether a character is uppercase
 *
 * Description: Prints the alphabet with _putchar
 * @ch: charater
 * Return: int
 */

int _isupper(int ch)
{
	if (ch >= 'A' && ch <= 'Z')
		return (1);
	else
		return (0);
}
