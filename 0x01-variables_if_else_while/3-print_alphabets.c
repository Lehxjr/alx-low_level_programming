#include <stdio.h>
#include <ctype.h>
/**
 * main - Entry point
 *
 * Return: return 0 (Success)
 */
int main(void)
{
	char letters[] = "abcdefghijklmnopqrstuvwxyz";
	int counter;

	for (counter = 0; counter < 26; counter++)
		putchar(letters[counter]);
	for (counter = 0; counter < 26; counter++)
		putchar((char) toupper(letters[counter]));

	putchar('\n');
	return (0);
}
