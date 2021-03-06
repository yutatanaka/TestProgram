
#include <stdio.h>


/*
	n …　移動させる円盤の枚数
	from …　移動元の棒の名前
	work …　作業用に使う棒の名前
	dest …　移動先の棒の名前

	この関数の意味は「第２引数から第４引数へｎ枚の円盤を移動させろ」
*/
void Hanoi(int n, char *from, char *work, char *dest)
{
	if(n >= 2) Hanoi(n - 1, from, dest, work);

	printf("%d番 %s から %s へ\n",n ,from, dest);

	if (n >= 2) Hanoi(n - 1, work, from, dest);

}


int main()
{
	Hanoi(3, "A", "B", "C");

	getchar();
	return 0;
}