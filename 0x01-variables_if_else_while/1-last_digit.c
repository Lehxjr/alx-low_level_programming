#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/**
 * main - Entry point
 *
 * Return: returns 0 (Success)
 */
int main(void)
{
	int n;
	int last_digit;
	char *description;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	last_digit = n % 10;

	if (last_digit ==0)
		description = "and is 0";
	else if (last_digit > 5)
		description = "and is greater than 5";
	else
		description = "and is less than 6 and not 0";
	printf("Last digit of %d id %d %s\n", n, last_digit, description);
	return (0);
}
