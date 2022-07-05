#include "main.h"
/**
 * _isalpha - check whether a character is an alphabet
 * @ch: The character to check
 *
 * Return: 1 if ch is an alphabet.
 * Otherwise 0.
 */
int _isalpha(int ch)
{
	if ((ch >= 'a' && ch <= 'z') || (ch >= 'A' && ch <= 'Z'))
		return (1);
	return (0);
}
