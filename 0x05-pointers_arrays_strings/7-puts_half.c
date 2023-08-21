#include "main.h"
/**
* puts_half - prints second half of string
* @str: string to be used
*/
void puts_half(char *str)
{
int len;
int half;
int i;

len = 0;
while (str[len] != '\0')
{
len++;
}
half = len / 2;
for (i = half ; i < len; i++)
_putchar(str[i]);
_putchar('\n');
}
