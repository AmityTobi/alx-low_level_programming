#include "main.h"

/*
 * print_alphabet - prints out the alphabet in lower case
 * Return: 0
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
