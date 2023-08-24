#include "main.h"
/**
* cap_string - capitalize first char of word
* @s: string
* Return: strings with capital
*/
char *cap_string(char *s)
{
	int i = 0;

	while (s[i] != '\0')
	{
	if (s[i] == ' ' || s[i] == ';'
	|| s[i] == ',' || s[i] == '.' ||
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
