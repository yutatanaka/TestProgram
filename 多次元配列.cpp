
// 多次元配列を使ったプログラム

#include <stdio.h>

void main()
{
	int a[3][4];
	int i,k;

	// 2次元配列に値を代入
	for (i = 0; i < 3; ++i)
	{
		for (k = 0; k < 4; ++k)
		{
			a[i][k] = i + k;
		}
	}

	// 成分の表示
	for (i = 0; i < 3; ++i)
	{
		for (k = 0; k < 4; ++k)
		{
			printf("%d", a[i][k]);
		}
		printf("\n");
	}

	getchar();
}