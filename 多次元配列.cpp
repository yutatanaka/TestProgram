
// �������z����g�����v���O����

#include <stdio.h>

void main()
{
	int a[3][4];
	int i,k;

	// 2�����z��ɒl����
	for (i = 0; i < 3; ++i)
	{
		for (k = 0; k < 4; ++k)
		{
			a[i][k] = i + k;
		}
	}

	// �����̕\��
	for (i = 0; i < 3; ++i)
	{
		for (k = 0; k < 4; ++k)
		{
			printf("%d", a[i][k]);
		}
		printf("\n");
	}

	getchar();
}