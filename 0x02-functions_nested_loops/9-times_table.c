#include "main.h"
/**
* times_table - prints 9 time table
*/
void times_table(void)
{
int i;
int j;
for (i = 0; i < 10; i++)
{
for (j = 0; j < 10; j++)
{
int z;
z = i * j;
if (z < 10)
_putchar(z + '0');
else
{
_putchar((z / 10) + '0');
_putchar((z % 10) + '0');
}
if (j != 9)
{
_putchar(',');
_putchar(' ');
}
}
_putchar('\n');
}
}
