int recurs(int x)
{
	if(x == 0)
		return 0;

	return x + recurs(x-1);
}

int main(void)
{
	recurs(5);

	return 0;
}
