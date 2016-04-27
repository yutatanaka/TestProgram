
// 配列をまとめて初期化する

#include <stdio.h>

void main()
{
	// 配列の要素数を決めずに、初期化した分だけ要素数が決まる
	int n[] = { 5, 4, 3, 2, 1 };
	
	int i;
	for (i = 0; i < 5; i++)
	{
		printf("n[%d] = %d\n", i, n[i]);
	}
	getchar();

}