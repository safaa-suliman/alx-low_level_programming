#include "main.h"
/**
* _strchr - locates a character in a string
* @s: string to be looked in
* @c: char to find
* Return: pointer to the first occurrence of the char
*/
char *_strchr(char *s, char c)
{
int i;

for (i = 0; s[i] != '\0'; i++)
{
if (s[i] == c)
return (&s[i]);
}
return (&s[i]);
}
