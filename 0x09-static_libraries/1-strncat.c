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
char *dest_str = dest;

while (*src != '\0' && n > 0)
{
*dest_str = *src;
n--;
dest_str++;
src++;
}
*dest_str = '\0';
return (dest_str);
}
