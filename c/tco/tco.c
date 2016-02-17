#include <globals.h>
#include <stdio.h>
#include <stdlib.h>

int helper(const int x, const int sum);

int tco(const int x)
{
	return helper(x, 0);
}

int helper(const int x, const int sum)
{
	if(x == 0)
		return sum;

	return helper(x-1, sum+x);
}

int main(int argc, char *argv[])
{
	if(argc < 2)
		return -1;

	printf("%d\n", tco(atoi(argv[1])));

	return 0;
}
