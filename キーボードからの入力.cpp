
// �L�[�{�[�h����̓���
// scanf()�֐����g��

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
	int num;

	printf("��������͂��Ă�������\n");	// �L�[�{�[�h����̓��͂𑣂����b�Z�[�W���o��

	scanf("%d", &num);					// �L�[�{�[�h������͂������l��ϐ�num�ɓǂݍ���

	printf("%d�����͂���܂����B\n", num);

	getchar();

	return 0;
}