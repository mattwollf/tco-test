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

int main(void)
{
	tco(5);

	return 0;
}
