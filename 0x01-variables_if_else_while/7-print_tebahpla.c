#include <stdio.h>
/**
 * main - prints chars in lower case in reverse order
 * Return: 0 (success)
 */
int main(void)
{
char ch = 'z';
while (ch >= 'a')
{
	putchar(ch);
	ch--;
}
putchar('\n');
return (0);
}
