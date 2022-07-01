#include <stdio.h>
/**
 * main - Entry point
 * Description: Print lowercase alphabets except the letters e and q.
 * Return: (0) on success
 */
int main(void)
{
	char ch = 'a';

	do {
		if (ch != 'q' && ch != 'e')
		{
			putchar(ch);
		}
		ch++;
	} while (ch <= 'z');
	putchar('\n');
	return (0);
}
