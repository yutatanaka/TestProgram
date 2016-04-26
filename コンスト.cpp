
// コンスト


#include <stdio.h>


void main()
{
	int a = 10;
	int b = 20;

	const int max = 200;// 定数

	int* const pa = &a;	// アドレスの再設定が出来ない
	const int* pb = &b; // 中身を書き換えられない

	getchar();
}