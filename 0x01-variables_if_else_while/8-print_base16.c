#include <stdio.h>

/**
 * main - prints Base16 using putchar
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int ch = '0';
	int a_to_f = 'a';

	while (ch <= '9')
	{
		putchar(ch); /*output 0-9*/
		ch++;
	}

	while (a_to_f <= 'f') /*output 10-15 in characters*/
	{
		putchar(a_to_f);
		a_to_f++;
	}
	putchar('\n');
	return (0);
}
