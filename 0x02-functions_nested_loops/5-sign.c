#include "main.h"
/**
*print_sign - prints the sign of the numbers
* @n: The number of which the sign will be printed.
*Return: it returns 0 if the n is zero
*and it returns + if the n is greater than zero
*and it returns - if the n is less than Zero
*/
int print_sign(int n)
{
	if (n > 0)
	{
	_putchar('+')
	return (1);
	}
	else if (n < 0)
	{
	_putchar('-');
	return (-1);
	}
	else
	{
	_putchar('0');
	return (0);
	}
}
