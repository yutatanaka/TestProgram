
#include <stdio.h>

int addition(int a, int b)
{
	int value;

	value = a + b;

	return value;
}

void main()
{
	printf("%d\n", addition(3, 5));

	getchar();
}