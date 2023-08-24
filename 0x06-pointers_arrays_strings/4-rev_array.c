#include "main.h"
/**
* reverse_array - reverse array content
* @a: the array of int
* @n: array size
*/
void reverse_array(int *a, int n)
{
int i;
int test;

for (i = 0; i < n / 2; i++)
{
test = a[i];
a[i] = a[n - i - 1];
a[n - i - 1] = test;
}
}
