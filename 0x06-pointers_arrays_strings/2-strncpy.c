#include "main.h"
/**
* _strncpy - copy string to another
* @dest: destination string
* @src: source string
* @n: number of strings
* Return: copied string
*/
char *_strncpy(char *dest, char *src, int n)
{
int j = 0;

while (j < n)
{
dest[j] = src[j];
j++;
}
return (dest);
}
