#include "main.h"
/**
* leet - leet encoding
* @s: string to be encoded
* Return: encoded string
*/
char *leet(char *s)
{
char *leetnum = "43071";
char *leetchar = "AEOTL";
char *leetsma = "aeotl";
int i;
int j;
for (i = 0; s[i] != '\0'; i++)
{
for (j = 0; j < 5; j++)
{
if (s[i] == leetchar[j] || s[i] == leetsma[j])
s[i] = leetnum[j];
}
}
return (s);
}
