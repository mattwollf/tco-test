#include <globals.h>
#include <stdio.h>
#include <stdlib.h>

int recurs(int x)
{
	if(x < 2)
		return x;

	return recurs(x-1) + recurs(x-2);
}

int main(int argc, char *argv[])
{
	if(argc < 2)
		return -1;

	printf("%d\n", recurs(atoi(argv[1])));

	return 0;
}
