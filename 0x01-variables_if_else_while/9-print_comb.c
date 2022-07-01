#include <stdio.h>
/**
 * main - Entry point
 * Description: Print combinations of single digit numbers in asceding order.
 * Return: (0) for success
 */
int main(void)
{
	int num = '0';

	while (num <= '9')
	{
		putchar(num);
		if (num != '9')
		{
			putchar(',');
			putchar(' ');
		}
		++num;
	}
	putchar('\n');
	return (0);

}
