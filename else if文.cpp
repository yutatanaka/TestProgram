
// else if��

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>


void main()
{
	// �ϐ���p��
	int value;

	printf("1�`3�̒l����͂��Ă��������F");

	// �L�[�{�[�h���琮�������
	scanf("%d", &value);

	if (value == 1)
	{
		printf("one\n");				// value���P�������ꍇ�̏���
	}
	else if (value == 2)
	{
		printf("two\n");				// value���Q�������ꍇ�̏���
	}
	else if (value == 3)
	{
		printf("three\n");				// value���R�������ꍇ�̏���
	}
	else
	{
		printf("�s�K�؂Ȓl�ł��B\n");	// ����ȊO�̒l�����͂��ꂽ�ꍇ�̏���
	}

	getchar();
}