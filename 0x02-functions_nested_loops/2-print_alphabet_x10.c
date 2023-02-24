#include "main.h"
/**
 * print_alphabet_x10 - Entry point
 *
 * Return: void
 */
void print_alphabet_x10(void)
{
	char alphabets[] = "abcdefghijklmnopqrstuvwxyz";
	int len = 26;
	int counter;
	int times = 0;

	while (times < 10)
	{
		counter = 0;

		while (counter < len)
		{
			_putchar(alphabets[counter]);
			counter++;
		}

		_putchar('\n');
		times++;
	}
}
