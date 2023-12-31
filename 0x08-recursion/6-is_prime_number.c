#include "main.h"
int check_prime(int n, int divisor);

/**
* is_prime_number - test prime numbers
* @n: number to test
* Return: 1(prime) 0 (other)
*/
int is_prime_number(int n)
{
	int prime;

	if (n <= 1)
		prime = 0;
	else
		prime = check_prime(n, 2);
	return (prime);
}
/**
* check_prime - checks prime
* @n: number
* @div: divission num
* Return: 0(prime) 1 other
*/

int check_prime(int n, int div)
{
	int check;

	if (div * div > n)
		check = 1;
	else
	{
	if (n % div == 0)
		check = 0;
	else
		check = check_prime(n, div + 1);
	}
return (check);
}
