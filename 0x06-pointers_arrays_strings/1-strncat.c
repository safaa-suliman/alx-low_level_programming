#include "main.h"
/**
*_strncat - function to concat two strings
* @dest: first sting
* @src: second string
* @n: number of bytes
* Return: concatinated string
*/
char *_strncat(char *dest, char *src, int n)
{
int i;
int j = 0;
int deslen = 0;
int srclen = 0;

while (dest[deslen] != '\0')
deslen++;
while (src[srclen] != '\0')
srclen++;
for (i = deslen; j < n; i++)
{
dest[i] = src[j];
j++;
}
return (dest);
}
