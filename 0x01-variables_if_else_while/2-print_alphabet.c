#include <stdio.h>
/**
 * main - Entry point
 * putchar - Output char to screen
 *
 * Return: 0 (Success)
 */
int main(void)
{
	char letters = 'a';
	
	while (letters <= 'z')
	{
		putchar(letters);
		letters++;
	}
	putchar('\n');
	return (0);
}
