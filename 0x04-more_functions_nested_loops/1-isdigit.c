#include "main.h"

/**
 * _isdigit - Take input character
 *
 * Description: define whether a character is a number
 * @ch: charater
 * Return: 1 yes 0 no
 */

int _isdigit(int ch)
{
	if (ch >= '0' && ch <= '9')
		return (1);
	else
		return (0);
}
