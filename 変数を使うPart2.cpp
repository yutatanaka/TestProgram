
// 変数を用いた計算

#include <stdio.h>


void main()
{
	// 使用する変数の定義
	int a;			// 変数の宣言
	int b = 3;		// 初期化と代入を同時にする
	int one, two;	// 複数の変数を同時に宣言
	float hoge;		// int 以外の変数を宣言

	a = 6;					// 初期化
	one = a + b;			// a,bの和を求める計算
	two = a - b;			// a,bの差を求める計算
	hoge = (a + b) / 2.0;	// a,bの平均値を求める計算式

	// これらの変数をprintf()で出力
	printf("%d + %d = %d\n", a, b, one);
	printf("%d - %d = %d\n", a, b, two);
	printf("%dと%dの平均値:%f\n", a, b, hoge);

	getchar();
}