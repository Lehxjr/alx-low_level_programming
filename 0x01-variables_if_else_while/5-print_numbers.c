#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: return 0 (Success)
 */
int main(void)
{
	int counter = 0;

	while (counter < 10)
	{
		printf("%d", counter);
		counter++;

		if (counter == 10)
			printf("\n");
	}
	return (0);
}
