
// 構造体
// 複数のデータ格納場所

#include <stdio.h>

struct Character
{
	int hp = 5;
	int attack = 3;

};

// キャラクター構造体の変数を宣言
Character player;


void main()
{
	// 構造体をアクセスするには変数の後にドットを付ける
	printf("hp : %d\n", player.hp);
	getchar();
}
