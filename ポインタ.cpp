
// ポインタを使う

#include <stdio.h>

void main()
{
	int a = 10;

	int* pt = &a;

	printf("%d\n", a);
	printf("%d\n", *pt);

	getchar();
}
