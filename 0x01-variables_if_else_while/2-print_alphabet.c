#include <stdio.h>
/**
 * main - Entry point
 * Description: Print lowercase alphabets.
 * Return: (0) for success
 */
int main(void)
{
	char ch = 'a';

	while (ch <= 'z')
	{
		putchar(ch);
		ch++;
	}
	putchar('\n');
	return (0);
}
