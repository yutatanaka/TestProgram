
// ���w�֐����g�����v���O����
#define _CRT_SECURE_NO_WARNINGS
#define PI 3.14

#include <stdio.h>
#include <math.h>

void main()
{
	int angle;
	float rad;
	printf("�p�x����͂��Ă�������(0�`360):");
	scanf("%d", &angle);

	// �p�x�����W�A���ɕϊ�
	rad = PI * (float)angle / 180.0;

	// �O�p�֐��ł̌v�Z
	printf("sin(%d)=%f\n", angle, sin(rad));
	printf("cos(%d)=%f\n", angle, cos(rad));
	printf("tan(%d)=%f\n", angle, tan(rad));

	getchar();
}