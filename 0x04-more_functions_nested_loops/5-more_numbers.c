#include "main.h"
/**
* more_numbers - print numbers from 1 - 14 ten times
*/
void more_numbers(void)
{
	int i;
	int j;

	for (j = 0; j < 10; j++)
	{
	for (i = 0; i < 15; i++)
	{
		if (i >= 10)
			_putchar('1');
		_putchar(i % 10 + '0');
	}
	_putchar('\n');
	}
}
