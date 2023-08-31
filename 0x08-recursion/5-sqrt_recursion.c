#include "main.h"
int check_sqrt(int n, int sqrt);
/**
* _sqrt_recursion - calcuate sqrt
* @n: number
* Return: sqrt(success)
*/
int _sqrt_recursion(int n)
{
	int sqrt;

	if (n < 0)
		sqrt = -1;
	else
	{
	if (n == 1)
		sqrt = 1;
	else
		sqrt = check_sqrt(n, 1);
	}
return (sqrt);
}

/**
 * check_sqrt - helper function to check for square root recursively
 * @n: number to find square root of
 * @x: current value to check
 * Return: square root of n (success), -1 if no natural square root
 */

int check_sqrt(int n, int x)
{
	int result;

	if (x * x == n)
		result = x;
	else if (x * x < n)
		result = check_sqrt(n, x + 1);
	else
		result = -1;
return (result);
}
