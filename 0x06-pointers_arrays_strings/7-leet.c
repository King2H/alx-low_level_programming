#include "main.h"
/**
 * leet - leet encoding
 * Return: pointer to arr
 * @s: string
 */
char *leet(char *s)
{
	char target[5][2] = {{'a', 'A'}, {'e', 'E'}, {'o', 'O'},
				 {'t', 'T'}, {'l', 'L'}};

	char replace_with[] = {'4', '3', '0', '7', '1'};

	int i = 0, j;

	while (s[i] != 0)
	{
		char ch = s[i];

		for (j = 0; j < 5; j++)
		{
			if (ch == target[j][0] || ch == target[j][1])
			{
				s[i] = replace_with[j];
				break;
			}
		}

		i++;
	}
	return (s);
}
