
// キーボードからの入力
// scanf()関数を使う

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
	int num;

	printf("整数を入力してください\n");	// キーボードからの入力を促すメッセージを出力

	scanf("%d", &num);					// キーボードから入力した数値を変数numに読み込み

	printf("%dが入力されました。\n", num);

	getchar();

	return 0;
}