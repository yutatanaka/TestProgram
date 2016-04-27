
// 配列

#include <stdio.h>

void main()
{
	int i[3];	// 配列を宣言 サイズ３の配列変数の宣言
	
	i[0] = 1;	// 配列の０番目に１を入れる
	i[1] = 2;	// 配列の１番目に２を入れる
	i[2] = 3;	// 配列の２番目に３を入れる

	// for文で配列を回して表示
	for (int k = 0; k < 3; k++)
	{
		printf("i[%d] = %d\n", k, i[k]);
	}
	getchar();
}