#include <stdio.h>

int Recursive(int n)
{
	if (n <= 1)
	{
		return 1;
	}
	return (n * Recursive(n - 1));
}

int main()
{
	int n = 5;
	int result;

	result = Recursive(n);
	printf("waaw%d‚ÌŠKæ = % d\n", n, result);
	printf("changed");
		return 0;
}