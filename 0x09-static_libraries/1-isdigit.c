#include "main.h"
/**
* _isdigit - detect digit numbers
* @c: number to be checked
* Return: 1 if itis digit , 0 otherwise
*/
int _isdigit(int c)
{
	if (c >= '0' && c <= '9')
	return (1);
	else
	return (0);
}
