#include<unistd.h>
/*
 * print in stderror instead of output
*/
int main()
{
	write(STDERR_FILENO, "and that piece of art is useful'"'" - Dora Korpar, 2015-10-19",59);
	return 1;
}
