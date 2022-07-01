#include <stdio.h>
/**
 * main - Entry point
 * Description: Print alphabets in reverse order
 * Return: (0) for success
 */
int main(void)
{
	char ch = 'z';

	while (ch >= 'a')
	{
		putchar(ch);
		ch--;
	}
	putchar('\n');
	return (0);
}
