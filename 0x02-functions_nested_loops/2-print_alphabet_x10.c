#include "main.h"

/**
 * print_alphabet - Prints the alphabets in lowercase 10 times
 * Return: 0
 */
void print_alphabet_x10(void)
{
	int i;
	char ch = 'a';

	while (ch <= 'z')
	{
		i = 0;
		
		while (i < 9)
		{
			_putchar(ch);
			i++;
		}
		_putchar('\n');
		ch++;
	}
	return;
}
