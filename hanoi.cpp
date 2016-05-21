
// �n�m�C�̓�

#include <stdio.h>

void Hanoi(int n, char *a, char *b, char *c)
{
	if (n >= 2) 
	{
		Hanoi(n - 1, a, b, c);
	}

	printf("%d �� %s ���� %s ��\n", n, a, c);

	if (n >= 2)
	{
		Hanoi(n - 1, b, a, c);
	}

}


void main()
{
	Hanoi(4, "A", "B", "C");
	getchar();
}
