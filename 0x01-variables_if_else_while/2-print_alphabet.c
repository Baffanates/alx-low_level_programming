#include <stdio.h>

/**
 * main - Entry point
 * Description - 'Determines if a number is positive, negative or zero'
 * @parameter: Determines if a number is positive, negative or zero
 * Return: Always 0 (success)
 */
int main(void)
{
	char alp[26] = "abcdefghijklmnopkrstuvwxyz";
	int i;

	for (i = 0; i < 26; i++)
	{
		putchar(alp[i]);
	}
	putchar('\n');
	return (0);
}