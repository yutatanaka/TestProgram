
// else if文

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>


void main()
{
	// 変数を用意
	int value;

	printf("1～3の値を入力してください：");

	// キーボードから整数を入力
	scanf("%d", &value);

	if (value == 1)
	{
		printf("one\n");				// valueが１だった場合の処理
	}
	else if (value == 2)
	{
		printf("two\n");				// valueが２だった場合の処理
	}
	else if (value == 3)
	{
		printf("three\n");				// valueが３だった場合の処理
	}
	else
	{
		printf("不適切な値です。\n");	// それ以外の値が入力された場合の処理
	}

	getchar();
}