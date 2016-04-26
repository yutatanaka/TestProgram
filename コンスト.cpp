
// コンスト


#include <stdio.h>

// クラス
class Hoge
{
	const int* const func(const int a)const;
	// constが先に書いてあれば、書き換え不能
	// constが後に書いてあれば、差し替え不能
	// constが引数の中で書いてあれば、引数が書き換えられない
	// constが引数の後に書いてあれば、メンバ変数が書き換えられない
};
Hoge h;

void main()
{
	int a = 10;
	int b = 20;

	const int max = 200;// 定数

	int* const pa = &a;	// アドレスの再設定が出来ない
	const int* pb = &b; // 中身を書き換えられない


	getchar();
}