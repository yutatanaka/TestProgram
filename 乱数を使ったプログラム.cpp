
// 乱数を使ったプログラム

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void main()
{
	int a, b;

	srand((unsigned)time(NULL));
	// 1から10までの乱数を発生させる
	a = rand() % 10 + 1;
	b = rand() % 10 + 1;

	printf("%d + %d = %d\n", a, b, a + b);

	getchar();
}