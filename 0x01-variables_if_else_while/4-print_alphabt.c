#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: return 0 (Success)
 */

int main(void)
{
	char letters[] = "abcdefghijklmnopqrstuvwxyz";
	int counter;

	for (counter = 0; counter < 27; counter++)
	{
		if (letters[counter] == 'e' || letters[counter] == 'q')
			continue;
		putchar(counter == 26 ? '\n' : letters[counter]);
	}

	return (0);
}
