
// ���G��if��

#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>

void main()
{

	int dice;

	// �T�C�R���̖ڂ����
	printf("�P����U�̐��l����͂��Ă��������F");
	scanf("%d", &dice);

	// �l���A�T�C�R���̖ڂ͈͓̔����ǂ����𒲂ׂ�
	if (1 <= dice && dice <= 6)
	{
		// �T�C�R���̖ڂ��A�������A����ŁA�����𕪂���
		if (dice == 2 || dice == 4 || dice == 6)
		{
			printf("��(�`���E)�ł�\n");	// �����Ȃ�Β�
		}
		else
		{
			printf("��(�n��)�ł�\n");	// ��Ȃ�Δ�
		}
	}
	else
	{
		printf("�͈͊O�̐��l�ł��B\n");
	}

	getchar();
}