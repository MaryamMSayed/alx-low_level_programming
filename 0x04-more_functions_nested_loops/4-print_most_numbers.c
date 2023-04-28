#include "main.h"

/**
*print_most_numbers - prints numbers from 0 to 9 except 2&4
* owned by Mariam Sayed
*/

void print_most_numbers(void)
{
	char c;

	for (c = '0'; c <= '9'; c++)
	{
	if (!(c == '2' || c == '4'))
	_putchar(c);
	}
	_putchar('\n');
}
