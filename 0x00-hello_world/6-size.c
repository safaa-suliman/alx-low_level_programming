#include <stdio.h>
/**
 * main - print data type sizes
 * Return: 0 (success)
 */
int main(void)
{
printf("Size of a char:  %zu byte(s)\n", sizeof(char));
printf("Size of an int: %zu byte(s)\n", sizeof(int));
printf("Size of a long int: %zu byte(s)\n", sizeof(long int));
printf("Size of a long long int: %zu", sizeof(long long int));
printf(" byte(s)\n");
printf("Size of a float: %zu byte(s)", sizeof(float));
return (0);
}
