#include <stdio.h>
/**
 * main - Entry point
 * Description: Print lowercase and uppercase alphabets sequentially.
 * Return: (0) for success
 */
int main(void)
{
	char l_ch = 'a';
	char u_ch = 'A';

	while (l_ch <= 'z')
	{
		putchar(l_ch);
		l_ch++;
	}
	while (u_ch <= 'Z')
	{
		putchar(u_ch);
		u_ch++;
	}
	putchar('\n');
	return (0);

}
