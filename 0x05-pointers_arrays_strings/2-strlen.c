#include "main.h"
/**
 * _strlen - returns the length of a string
 * @s: parameter
 *
 * Description: returns the length of the string
 * Return: the length of the string
 */
int _strlen(char *s)
{
	int str_len = 0;

	while (*s++)
		str_len++;
	return (str_len);
}
