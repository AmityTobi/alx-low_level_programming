#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int i; /* represents hundreds*/
	int j; /* represents tens*/
	int k; /* represents units*/


	for (i = '0'; i <= '9'; i++)
	{
		for (j = (i + 1); j <= '9'; j++)
		{
			for (k = (j + 1); k <= '9'; k++)
			{
				putchar(i);
				putchar(j);
				putchar(k);
				if (i != '8' || j != '9')
				{
					putchar(',');
					putchar(' ');
				}
			}
		}

	}
	putchar('\n');
	return (0);
}
