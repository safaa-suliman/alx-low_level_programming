#include "main.h"
/**
* _strpbrk - search for a set of bytes
* @s: string in which to search
* @accept: chars to search for
* Return: pointer to first accurance
*/

char *_strpbrk(char *s, char *accept)
{
	int i;

	while (*s != '\0')
	{
		for (i = 0; accept[i]; i++)
		{
		if (*s == accept[i])
		return (s);
		}
	s++;
	}
return ('\0');
}
