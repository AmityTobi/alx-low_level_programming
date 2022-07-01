#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: 0 (Success)
 */
int main(void)
{
	char lower = 'a'
	char upper = 'A'

	while (lower <= 'z') /* loop through lower-cases a-z*/
	{
		putchar(lower);
		lower++;
	}

	while (upper <= 'Z') /* loop through upper-cases A-Z*/
	{
		putchar(upper);
		upper++;
	}

	putchar('\n');
	return (0);
}
