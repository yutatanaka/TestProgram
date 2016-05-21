
// �n�m�C�̓�

#include <stdio.h>

void Hanoi(int diskNumber, char *a, char *b, char *c)
{
	if (diskNumber >= 2)
	{
		Hanoi(diskNumber - 1, a, b, c);
	}

	printf("%d �� %s ���� %s �Ɉړ�\n", diskNumber, a, c);


	if (diskNumber >= 2)
	{
		Hanoi(diskNumber - 1, b, a, c);
		
	}
	printf("%d �� %s ���� %s �Ɉړ�\n", diskNumber, c, b);

	
}


void main()
{

	Hanoi(4, "A", "B", "C");

	getchar();

}
