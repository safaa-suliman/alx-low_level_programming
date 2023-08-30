#include "main.h"
/**
* factorial - calcuate factorial
* @n: number
* Return: the factorial
*/
int factorial(int n)
{
	int fact = 1;

	if (n < 0)
		fact = -1;
	else
	{
	if (n == 0)
		fact = 1;
	else
		fact =  n * factorial(n - 1);
	}
	return (fact);
}
