#include "main.h"

/**
 * print_last_digit - prints the value of the last digit
 * Return: The value of the last digit.
 */
int print_last_digit(int n)
{
	int lastDigit;

	lastDigit = n % 10;
	if (last_digit < 0)
		last_digit *= -1;

	_putchar(last_digit + '0');
	return (lastDigit);
}


