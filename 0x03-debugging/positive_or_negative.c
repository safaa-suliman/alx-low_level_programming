#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/**
* positive_or_negative - checks if number is postive or negative
* @n: number to be checked
* Return: 0 (success)
*/
int positive_or_negative(int n)
	{

		srand(time(0));


		if (n > 0)
			printf("%d is positive\n", n);
		else
		if (n < 0)
			printf("%d is negative\n", n);
		else
			printf("%d is zero\n", n);
		return (0);
	}
