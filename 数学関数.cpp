
// 数学関数を使ったプログラム
#define _CRT_SECURE_NO_WARNINGS
#define PI 3.14

#include <stdio.h>
#include <math.h>

void main()
{
	int angle;
	float rad;
	printf("角度を入力してください(0～360):");
	scanf("%d", &angle);

	// 角度をラジアンに変換
	rad = PI * (float)angle / 180.0;

	// 三角関数での計算
	printf("sin(%d)=%f\n", angle, sin(rad));
	printf("cos(%d)=%f\n", angle, cos(rad));
	printf("tan(%d)=%f\n", angle, tan(rad));

	getchar();
}