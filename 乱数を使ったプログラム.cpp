
// �������g�����v���O����

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void main()
{
	int a, b;

	srand((unsigned)time(NULL));
	// 1����10�܂ł̗����𔭐�������
	a = rand() % 10 + 1;
	b = rand() % 10 + 1;

	printf("%d + %d = %d\n", a, b, a + b);

	getchar();
}