#include <stdio.h>
/**
 * main - Entry point
 * Description: Print all single digit numbers [0-9]
 * Return: (0) on success
 */
int main(void)
{
	int num;

	for (num = 0; num < 10; num++)
	{
		printf("%d", num);
	}
	putchar('\n');
	return (0);
}
