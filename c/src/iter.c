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
	iter(5);

	return 0;
}
