#include <stdio.h>

/**
 * main - print 01-89 seperetad by commas, using putchar
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int i = '0';
	int j = '1';

	for (i; i <= '9'; i++)
	{
		for (j; j <= '9'; j++)
		{
			putchar(i);
			putchar(j);

			if (i != '8' || j != '9')
			{
				putchar(',');
				putchar(' ');
			}
		}

	}
	putchar('\n');
	return (0);
}
