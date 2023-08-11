#include <stdio.h>
/**
 * main - print single digits of base 10
 * Return: 0 (scuccess)
 */
int main(void)
{
int num;
for (num = 0; num < 10; num++)
{
	putchar(num + '0');
	if (num != 9)
	{
		putchar(',');
		putchar(' ');
	}
}
putchar('\n');
return (0);
}
