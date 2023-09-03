#include "main.h"
/**
* _memset - fill memory by n bytes
* @s: blocked to be filled in memory
* @b: the value to fill mem with
* @n: number of bytes to fill
* Return: filled block of memory
*/
char *_memset(char *s, char b, unsigned int n)
{
unsigned int i;

for (i = 0; i < n; i++)
s[i] = b;
return (s);
}
