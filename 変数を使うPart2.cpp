
// �ϐ���p�����v�Z

#include <stdio.h>


void main()
{
	// �g�p����ϐ��̒�`
	int a;			// �ϐ��̐錾
	int b = 3;		// �������Ƒ���𓯎��ɂ���
	int one, two;	// �����̕ϐ��𓯎��ɐ錾
	float hoge;		// int �ȊO�̕ϐ���錾

	a = 6;					// ������
	one = a + b;			// a,b�̘a�����߂�v�Z
	two = a - b;			// a,b�̍������߂�v�Z
	hoge = (a + b) / 2.0;	// a,b�̕��ϒl�����߂�v�Z��

	// �����̕ϐ���printf()�ŏo��
	printf("%d + %d = %d\n", a, b, one);
	printf("%d - %d = %d\n", a, b, two);
	printf("%d��%d�̕��ϒl:%f\n", a, b, hoge);

	getchar();
}