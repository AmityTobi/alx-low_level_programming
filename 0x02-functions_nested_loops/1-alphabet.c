#include "main.h"

/**
 * main - check the code
 *
 * Return: Always 0.
 */
int main(void)
{	
	print_alphabet();
	return (0);
}
void print_alphabet(void)
{
	char ch = 'a';

	while ('a' <= 'z')
	{
		_putchar(ch);
		ch++;
	}
	_putchar('\n');
}
