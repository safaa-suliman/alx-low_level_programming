#include "main.h"
/**
* print_line - print line into terminal
* @n: number of - to be printed
*/
void print_line(int n)
{
	int i;

	i = 0;
	while (i < n)
	{
	_putchar('_');
	i++;
	}
	_putchar('\n');
}
