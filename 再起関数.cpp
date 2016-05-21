
#include <stdio.h>

int frac(int n)
{
	int result = 1, i;
	
	for (i = 1; i <= n; ++i)
	{
		result *= i;
	}

	return result;
}

int frac2(int n)
{
	if (n == 0)
	{
		return 1;
	}

	return n * frac2(n - 1);

}


void main()
{
	int n;

	n = frac2(5);
	printf("%d\n", n);

	getchar();
}