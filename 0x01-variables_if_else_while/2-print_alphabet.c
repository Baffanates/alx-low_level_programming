#include <stdio.h>

/**
 * main - Entry point
 * Description - 'Determines if a number is positive, negative or zero'
 * Return: Always 0 (success)
 */
int main(void)
{
	char alp[27] = "abcdefghijklmnopqkrstuvwxyz";
	int i;

	for (i = 0; i < 27; i++)
	{
		putchar(alp[i]);
	}
	putchar('\n');
	return (0);
}
