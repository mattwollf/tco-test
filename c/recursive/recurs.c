#include <globals.h>
int recurs(int x)
{
	if(x == 0)
		return 0;

	return x + recurs(x-1);
}

int main(void)
{
	recurs(500);

	return 0;
}
