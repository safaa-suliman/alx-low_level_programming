#include <stdio.h>
/**
 * main - prints chars in lower case
 * Return: 0 (success)
 */
int main(void)
{
char ch = 'a';
while (ch < 'z')
{
	if (ch != 'q' || ch != 'e')
		putchar(ch);
	ch++;
}
putchar('\n');
return (0);
}
