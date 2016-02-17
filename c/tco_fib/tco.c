#include <globals.h>
#include <stdio.h>
#include <stdlib.h>

int helper(const int n1, const int n2, const int count);

int tco(const int x)
{
	if(x == 0)
		return 0;

	return helper(1, 0, x);
}

int helper(const int n1, const int n2, const int count)
{
	if(count == 0)
		return n2;
	return helper(n1 + n2, n1, count - 1);
}

int main(int argc, char *argv[])
{
	if(argc < 2)
		return -1;

	printf("%d\n",	tco(atoi(argv[1])));

	return 0;
}
