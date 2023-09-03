#include "main.h"
/**
* _isalpha - check alphabetic character
* @c: charcter to check
* Return: 1 if alpha, 0 otherwise
*/
int _isalpha(int c)
{
if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
return (1);
else
return (0);
}
