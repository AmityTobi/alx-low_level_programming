#include "main.h"

/**
 * _islower - checks for lowercase
 *@c: character to check
 * Return: 1 if c is lowercase , 0 if it's uppercase
 */
int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
		return (1);
	else
		return (0);
	_putchar('\n');
}
