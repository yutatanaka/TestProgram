
// if�Aelse��

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

void main()
{

	int hoge;

	printf("���l����� :");

	scanf("%d", &hoge);

	if (hoge >= 0)
	{
		printf("%d�͐��̐��ł�\n", hoge);
	}
	else
	{
		printf("%d�͕��̐��ł�\n", hoge);
	}


	getchar();
}