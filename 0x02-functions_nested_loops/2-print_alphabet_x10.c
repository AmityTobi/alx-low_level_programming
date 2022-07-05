#include "main.h"

/**
 * print_alphabet_x10 - Prints the alphabets in lowercase 10 times
 * Return: 0
 */
void print_alphabet_x10(void)
{
	int i = 0;
	char ch;

	while (i < 9)
	{
		ch = 'a';
		while (ch <= 'z')
		{
			_putchar(ch);
			ch++;
		}
		_putchar('\n');
		i++;
	}
}
