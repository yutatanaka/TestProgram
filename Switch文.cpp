
// switch���̎g����

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

void main()
{
	int num;

	printf("�P�`�R�̒l����͂��Ă��������F");

	// �L�[�{�[�h���琮�������
	scanf("%d", &num);
	// ���͂����l���A���̐����ǂ����𒲂ׂ�
	switch (num)
	{
	case 1:
		printf("one\n");	// num��1�������ꍇ�̏���
		break;
	case 2:
		printf("two\n");	// num��2�������ꍇ�̏���
		break;
	case 3:
		printf("three\n");	// num���R�������ꍇ�̏���
		break;
	default:
		printf("�s�K�؂Ȓl�ł��B\n");	// ����ȊO�̒l�����͂��ꂽ�ꍇ�̏���
		break;
	}

	getchar();
}