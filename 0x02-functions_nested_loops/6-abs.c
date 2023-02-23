#include "main.h"
/**
 * _abs - main code
 * @n: this is the number which has its absolute
 * number printed
 *
 * Return: int
 */
int _abs(int n)
{
	int result;

	if (n >= 0)
	{
		result = n;
	}
	else
	{
		result = n * -1;
	}

	return (result);
}
