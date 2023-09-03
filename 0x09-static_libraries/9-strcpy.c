#include "main.h"
/**
* _strcpy - copy array to array
* @dest: destination array
* @src: source array
* Return: pointers of char
*/
char *_strcpy(char *dest, char *src)
{
char *destination = dest;

while (*src != '\0')
{
*dest = *src;
dest++;
src++;
}
*dest = '\0';
return (destination);
}
