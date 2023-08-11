#include <stdio.h>
/**
 * main - print combination of two digits of base 10
 * Return: 0 (scuccess)
 */
int main(void)
{
int num;
int hund;
int dec;
for (num = 0; num < 10; num++)
{
	for (hund = 0; hund < 10; hund++)
	{
		dec = hund + 1;
		for (; dec < 10; dec++)
		{
			putchar(num + '0');
			putchar(hund + '0');
			putchar(' ');
			putchar(hund + '0');
			putchar(dec + '0');
			if (num != 9 || hund != 8 || dec != 9)
				putchar(',');
		}
	}
}
putchar('\n');
return (0);
}
