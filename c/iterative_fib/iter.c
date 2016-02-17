#include <globals.h>
#include <stdio.h>
#include <stdlib.h>

int fib( int x)
{
	if( x < 2)
		return x;

	int n1 = 1;
	int n2 = 0;

	while( x --> 0)
	{
		n1 = n1 + n2;
		n2 = n1;
	}

	return n1;
}

int main(int argc, char *argv[])
{
	if(argc < 2)
		return -1;

	printf("%d\n", fib(atoi(argv[1])));

	return 0;
}
