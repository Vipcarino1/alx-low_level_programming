#include <stdio.h>
/**
 * main - Entry point
 * Return: 0
 */
int main(void)
{
	int i = '0';
	int j = '0';

	while (i <= '9')
	{
		while (j <= '9')
		{
			if (!(i > j))
			{
				if (i == j)
				{
					j++;
				}
				else
				{
				putchar(i);
				putchar(j);
				if ((i == '8') && (j == '9'))
				{
					putchar('\n');
				}
				else
				{
					putchar(',');
					putchar(' ');
				}
				j++;
				}
			}
			else
				j++;
		}
	i++;
	j = '0';
	}
	return (0);
}
