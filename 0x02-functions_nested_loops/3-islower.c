#include "main.h"

/**
 * _islower - checks for lowercase
 *
 * Return: 1 if c is lowercase , 0 if it's uppercase
 */
int _islower(int c)
{
	if (c >= 'a' && c <= 'z'  )
		return (1);
	else
		return (0);
	_putchar('\n');
}
