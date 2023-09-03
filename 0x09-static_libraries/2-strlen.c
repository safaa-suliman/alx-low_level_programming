#include "main.h"
/**
* _strlen - calcuate length of string
* @s: string
* Return: string length
*/
int _strlen(char *s)
{
	int len;

	len = 0;
	while (*s != '\0')
	{
	len++;
	s++;
	}
return (len);
}
