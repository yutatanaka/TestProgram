
// ハノイの塔

#include <stdio.h>

void Hanoi(int n, char *a, char *b, char *c)
{
	if (n >= 2) 
	{
		Hanoi(n - 1, a, b, c);
	}

	printf("%d を %s から %s へ\n", n, a, c);

	if (n >= 2)
	{
		Hanoi(n - 1, b, a, c);
	}

}


void main()
{
	Hanoi(4, "A", "B", "C");
	getchar();
}
