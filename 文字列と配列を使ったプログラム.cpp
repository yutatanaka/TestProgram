
// ������Ɣz����g�����v���O����	

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

void main()
{
	char string1[4] = { ' a ', ' b ', ' c ', ' \0 ' };		// ������ "abc"
	char string2[] = "HelloWorld";							// ������ "HelloWorld"
	char string3[10];										// �ő�10�����܂œ��镶����
	
	// ������̓���
	printf("��������͂��Ă��������F");
	scanf("%s", &string3);	// ������̓���
	printf("string1 = %s\n", string1);
	printf("string2 = %s\n", string2);
	printf("string3 = %s\n", string3);
	
	getchar();
}