#include "main.h"
/**
* _islower - checks if the letter is lower case or not
* @c: charcter to check
* Return: 1 for lower case and 0 for other
*/
int _islower(int c)
{
if (c >= 'a' && c <= 'z')
return (1);
else
return (0);
}
