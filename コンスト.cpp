
// �R���X�g


#include <stdio.h>

// �N���X
class Hoge
{
	const int* const func(const int a)const;
	// const����ɏ����Ă���΁A���������s�\
	// const����ɏ����Ă���΁A�����ւ��s�\
	// const�������̒��ŏ����Ă���΁A�����������������Ȃ�
	// const�������̌�ɏ����Ă���΁A�����o�ϐ��������������Ȃ�
};
Hoge h;

void main()
{
	int a = 10;
	int b = 20;

	const int max = 200;// �萔

	int* const pa = &a;	// �A�h���X�̍Đݒ肪�o���Ȃ�
	const int* pb = &b; // ���g�������������Ȃ�


	getchar();
}