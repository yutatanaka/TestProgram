
// �z��

#include <stdio.h>

void main()
{
	int i[3];	// �z���錾 �T�C�Y�R�̔z��ϐ��̐錾
	
	i[0] = 1;	// �z��̂O�ԖڂɂP������
	i[1] = 2;	// �z��̂P�ԖڂɂQ������
	i[2] = 3;	// �z��̂Q�ԖڂɂR������

	// for���Ŕz����񂵂ĕ\��
	for (int k = 0; k < 3; k++)
	{
		printf("i[%d] = %d\n", k, i[k]);
	}
	getchar();
}