
// if、else文

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

void main()
{

	int hoge;

	printf("数値を入力 :");

	scanf("%d", &hoge);

	if (hoge >= 0)
	{
		printf("%dは正の数です\n", hoge);
	}
	else
	{
		printf("%dは負の数です\n", hoge);
	}


	getchar();
}