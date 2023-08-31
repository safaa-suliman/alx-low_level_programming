#include "main.h"
int check_palin(char *s, int first, int last);
int str_len(char *s);

/**
* is_palindrome - find palindrome
* @s: string to test
* Return: 1(palindrome) 0(otherwise)
*/

int is_palindrome(char *s)
{
	int len = str_len(s);

	return (check_palin(s, 0, len - 1));
}
/**
* check_palin - check palin str
* @s: string
* @first: first index
* @last: last index
* Return: 1(sucess) 0(otherwise)
*/
int check_palin(char *s, int first, int last)
{
	int palin;

	if (first >= last)
		palin = 1;
	else
	{
	if (s[first] != s[last])
		palin = 0;
	else
		palin = check_palin(s, first + 1, last - 1);
	}
return (palin);
}
/**
* str_len - calcuate str len
* @s: string to calcuate
* Return: len string
*/
int str_len(char *s)
{
	int len = 0;

	while (s[len] != '\0')
		len++;
	return (len);
}
