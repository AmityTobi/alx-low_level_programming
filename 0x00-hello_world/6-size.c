#include <stdio.h>

/**
 * main -Entry point
 *
 * sizeof - Used to print type sizes
 *
 * printf - Used to print formatted text
 *
 * Retun: Always 0 (Success)
 */
int main(void)
{
	char ch = sizeof(char);
	int int_type = sizeof(int);
	float float_type = sizeof(float);
	long long_type = sizeof(long);
	long ll_type =sizeof(long long);
		
	printf("size of a char: %c byte(s)\n",ch);
	printf("size of an int: %d byte(s)\n",int_type);
	printf("size of a long int: %li byte(s)\n",long_type);
	printf("size of a long long int: %ld byte(s)\n",long_type);
	printf("size of a float: %f byte(s)\n",float_type);
	return (0);
}
