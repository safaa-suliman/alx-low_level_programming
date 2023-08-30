#include "main.h"
/**
* _pow_recursion - calcuate num to power
* @x: base num
* @y: power
* Return: num to the power
*/

int _pow_recursion(int x, int y)
{
	int pow;

	if (y < 0)
		pow = -1;
	else
	{
	if (y == 0)
		pow = 1;
	else
		pow = x * (_pow_recursion(x, y - 1));
	}
	return (pow);
}
