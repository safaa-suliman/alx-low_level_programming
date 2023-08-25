#include "main.h"
/**
* cap_string - capitalize first char of word
* @s: string
* Return: strings with capital
*/
char *cap_string(char *s)
{
	int i = 0;

	s[0] -= ('a' - 'A');
	while (s[i] != '\0')
	{
	if (s[i] == ' ' || s[i] == ';' || s[i] == '\t' 
	|| s[i] == ',' || s[i] == '.' || s[i] == '\n' ||
	s[i] == '!' || s[i] == '?' || s[i] == '"' ||
	s[i] == '(' || s[i] == ')' || s[i] == '{' ||
	s[i] == '}')
		{
		if (s[i + 1] >= 'a' && s[i + 1] <= 'z')
		{
		s[i + 1] -= ('a' - 'A');
		}
		}
	i++;
	}
return (s);
}
