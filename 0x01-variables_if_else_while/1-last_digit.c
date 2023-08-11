#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/**
 * main - checks if number is postive or negative
 * Return: 0 (success)
  */
int main(void)
{
int n;
srand(time(0));
n = rand() - RAND_MAX / 2;
printf("Last digit of", n, "is");
if (n % 10 > 5)
	printf("and is greater than 5");
else
	if (n % 10 == 0)
		printf("and is 0");
	else
		if (n % 10 < 6)
			printf("and is less than 6 and not 0");
return (0);
}
