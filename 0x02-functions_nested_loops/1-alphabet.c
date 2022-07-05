#include "main.h"

/**
 * while - looping through the alphabets
 *
 * _putchar - used to display output
 */
void print_alphabet(void)
{
	char ch = 'a';

	while (ch <= 'z')
	{
		_putchar(ch);
		ch++;
	}
	_putchar('\n');
}
