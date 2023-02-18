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
	char *n_type;

	srand(time(0))
	n = rand() - RAND_MAX / 2;

	if (n == 0)
		n_type = " is zero";
	else if (n > 0)
		n_type = " is positive";
	else
		n_type = " is negative";
	printf("%d%s\n", n, n_type);
	return (0);
}
