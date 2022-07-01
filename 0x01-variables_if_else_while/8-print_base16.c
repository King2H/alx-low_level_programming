#include <stdio.h>
/**
 * main - Entry point
 * Description: Print all base16 numbers in lowercase
 * Return: (0) on success
 */
int main(void)
{
	int num = '0';

	while (num <= '9')
	{
		putchar(num);
		num++;
	}
	num = 'a';
	while (num <= 'f')
	{
		putchar(num);
		num++;
	}
	putchar('\n');
	return (0);

}
