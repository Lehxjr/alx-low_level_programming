#include <stdio.h>
/**
 * main - Entry point
 */
int main(void)
{
	int max_num = 10;
	int counter = 0;

	while (counter < max_num)
	{
		/**
		 * if (counter != 0 && (counter % 11 == 0))
		 *	countinue;
		 */
		putchar('0' + counter);

		if (counter != max_num - 1)
		{
			putchar(',');
			putchar(' ');
		}
		else
		{
			putchar('\n');
		}

		counter++;
	}
	return (0);
}
