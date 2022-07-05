#include "main.h"
/**
 * _islower - check if a character is lowercase
 * @c: The character input to check
 *
 * Return: 1 if c is lowercase.
 * Otherwise 0.
 */
int _islower(int ch)
{
	if (ch >= 'a' && ch <= 'z')
		return (1);
	return (0);
}
