#include "main.h"
/**
* _strspn - calcuate matching chars
* @s: string in which to find initial segment
* @accept: sgement chars set
* Return: length of matched chars
*/

unsigned int _strspn(char *s, char *accept)
{
	int i;
	int j;
	unsigned int len = 0;
	int match;

	for (i = 0; s[i] != '\0'; i++)
	{
		match = 0;
		for (j = 0; accept[j]; j++)
		{
		if (s[i] == accept[j])
		match = 1;
		}

		if (match)
			len++;
			else
			break;
	}
return (len);
}
