#include <stdio.h>

/**
 * main - Entry point
 *
 * Description: 'the program's description'
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	prinf("size of a char: %d bytes(s)\n", sizeof(char));
	prinf("size of an int: %d bytes(s)\n", sizeof(int));
	prinf("size of a long int: %d bytes(s)\n", sizeof(long int));
	prinf("size of a long long int: %d bytes(s)\n", sizeof(long long int));
	prinf("size of a float: %d bytes(s)\n", sizeof(float));
	return (0);
}
