
#include <stdio.h>


/*
	n �c�@�ړ�������~�Ղ̖���
	from �c�@�ړ����̖_�̖��O
	work �c�@��Ɨp�Ɏg���_�̖��O
	dest �c�@�ړ���̖_�̖��O

	���̊֐��̈Ӗ��́u��Q���������S�����ւ����̉~�Ղ��ړ�������v
*/
void Hanoi(int n, char *from, char *work, char *dest)
{
	if(n >= 2) Hanoi(n - 1, from, dest, work);

	printf("%d�� %s ���� %s ��\n",n ,from, dest);

	if (n >= 2) Hanoi(n - 1, work, from, dest);

}


int main()
{
	Hanoi(3, "A", "B", "C");

	getchar();
	return 0;
}