#include <stdio.h>

/**
 * main - print all possible combinations of two two-digit numbers
 * Return: 0 (success)
 */
int main(void)
{
int num1;
int num2;
int comma = 0;

for (num1 = 0; num1 < 100; num1++)
{
	for (num2 = 0; num2 < 100; num2++)
	{
		if (num1 < num2)
		{
			if (comma)
			{
				putchar(',');
				putchar(' ');
			}
			else
			{
				comma = 1;
			}
			putchar((num1 / 10) + '0');
			putchar((num1 % 10) + '0');
			putchar(' ');
			putchar((num2 / 10) + '0');
			putchar((num2 % 10) + '0');
		}
	}
}
putchar('\n');
return (0);
}

