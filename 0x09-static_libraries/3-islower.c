#include "main.h"
/**
 * _islower - main code
 * @c: this is the value which has its case checked
 *
 * Return: 0 when alphabet is lower and 1 if not
 */
int _islower(int c)
{
	int result;

	if (c >= 97 && c <= 122)
		result = 1;
	else
		result = 0;

	return (result);
}
