#include "main.h"

/**
 * main - Entry point
 *
 * Description: printing _putchar and newline
 *
 * Retrun: Always 0 (Success)
 */
int main(void)
{
	char string[] = {'_', 'p', 'u', 't', 'c', 'h', 'a', 'r'};
	int i = 0;

	while (i < 8)
	{
		_putchar(string[i]);
		i++;
	}

	_putchar('\n');
	return (0);

