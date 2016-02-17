#include <globals.h>
#include <stdio.h>
#include <stdlib.h>

int fib( int x)
{
	int n1 = 1;
	int n2 = 0;
	int tmp;

	while( x --> 0)
	{
		tmp = n1;
		n1 = n1 + n2;
		n2 = tmp;
	}

	return n2;
}

int main(int argc, char *argv[])
{
	if(argc < 2)
		return -1;

	printf("%d\n", fib(atoi(argv[1])));

	return 0;
}
