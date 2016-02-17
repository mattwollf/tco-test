#include <globals.h>

int iter(const int x)
{
	int sum = 0;
	for( int i = 1; i <= x; ++i){

		sum += i;

	}

	return sum;
}

int main(void)
{
	iter(INPUT);

	return 0;
}
