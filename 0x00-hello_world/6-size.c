#include <stdio.h>

/**
 * main -Entry point
 *
 * sizeof - Used to print type sizes
 *
 * printf - Used to print formatted text
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int ch = sizeof(char);
	int int_type = sizeof(int);
	int float_type = sizeof(float);
	long long_type = sizeof(long);
	long ll_type = sizeof(long long);
		printf("Size of a char: %d byte(s)\n", ch);
		printf("Size of an int: %d byte(s)\n", int_type);
		printf("Size of a long int: %li byte(s)\n", long_type);
		printf("Size of a long long int: %ld byte(s)\n", ll_type);
		printf("Size of a float: %d byte(s)\n", float_type);
		return (0);
}
