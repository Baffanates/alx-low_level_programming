#include  <"main.h">

/**
 * _isdigit - checks for a digit
 * @c: char to be cheked
 * Return: 1 for a digit character or 0 for anything else
 */

int _isdigit(int c)
{
	if (c >= '48' && c <= '57')
		return (1);
	else
		return (0);
}