
// �������[�v���g�����v���O����

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

void main()
{

	int num;

	printf("���̒l�ŁA���[�v���甲���܂��B\n");
	
	while (1)
	{
		printf("���l����́F");
		scanf("%d", &num);
		if (num < 0)
		{
			// ���[�v���甲���鏈��
			break;
		}
	}
	printf("�I��\n");

	getchar();
}
