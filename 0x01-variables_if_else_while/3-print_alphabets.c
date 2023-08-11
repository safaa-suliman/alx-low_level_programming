#include <stdio.h>
/**
 * main - prints chars in lower case
 * Return: 0 (success)
 */
int main(void)
{
char letter = 'A';
char ch = 'a';
while (ch <= 'z')
{
	putchar(ch);
	ch++;
}
while (letter <= 'Z')
{
	putchar(letter);
	letter++;
}
putchar('\n');
return (0);
}
