#include <stdio.h>

/**
 * main - Entry point
 *
 * Description: 'the program's description'
 * @parameter: describe the parameter
 *
 * Return: Always 0 (Success)
 */
int main(void)
{

char alp[52] = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ";
	int i;

	for (i = 0; i < 52; i++)
	{	
		putchar(alp[i]);
	}
	putchar('\n');
	return (0);
}
