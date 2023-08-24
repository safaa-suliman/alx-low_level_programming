#include "main.h"
/**
* rot1 - applying root 13
* @s: string to rooted
* Return: rooted string
*/
char *rot13(char *s)
{
int i;
for (i = 0; s[i] != '\0'; i++)
{
if (s[i] >= 'a' && s[i] <= 'z')
s[i] = 'a' + (s[i] - 'a' + 13) % 26;
else
s[i] = 'A' + (s[i] - 'A' + 13) % 26;
}
return (s);
}
