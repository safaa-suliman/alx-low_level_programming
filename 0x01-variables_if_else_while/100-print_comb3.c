#include <stdio.h>
/**
 * main - print combination of two digits of base 10
 * Return: 0 (scuccess)
 */
int main(void)
{
int num;
int hund;
for (num = 0; num < 10; num++)
{
	hund = num + 1;
	for (; hund < 10; hund++)
	{
		putchar(num + '0');
		putchar(hund + '0');
		putchar(',');
		putchar(' ');
	}
}
putchar('\n');
return (0);
}
