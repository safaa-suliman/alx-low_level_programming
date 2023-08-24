#include "main.h"
/**
*_strcat - function to concat two strings
* @dest: first sting
* @src: second string
* Return: concatinated string
*/
char *_strcat(char *dest, char *src)
{
int i;
int j = 0;
int deslen = 0;
int srclen = 0;

while (dest[deslen] != '\0')
{
deslen++;
}
while (src[srclen] != '\0')
srclen++;
for (i = deslen; j <= srclen; i++)
{
dest[i] = src[j];
j++;
}
return (dest);
}

