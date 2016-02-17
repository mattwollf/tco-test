#include <globals.h>

#include <stdio.h>
#include <stdlib.h>

int iter(const int x)
{
	int sum = 0;
	for( int i = 1; i <= x; ++i){

		sum += i;

	}

	return sum;
}

int main(int argc, char *argv[])
{
	if(argc < 2)
		return -1;

	printf("%d\n", iter(atoi(argv[1])));

	return 0;
}
