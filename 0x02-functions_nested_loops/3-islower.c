#include "main.h"

/**
 * _islower - checks for lowercase
 *
 * Return: 1
 *
 * Return: 0
 */
int _islower(int c)
{
	if (c >= 'a' && c <= 'z'  )
		return (1);
	else
		return (0);
	_putchar('\n');
}
