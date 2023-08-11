#include <stdio.h>
/**
 * main - print single digits of base 16
 * Return: 0 (scuccess)
 */
int main(void)
{
int num;
for (num = 0; num < 16; num++)
{
	if (num < 10)
		putchar(num + '0');
	else
		putchar(num - 10 + 'a');
}
putchar('\n');
return (0);
}
