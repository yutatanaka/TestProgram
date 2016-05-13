
// 文字列と配列を使ったプログラム	

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

void main()
{
	char string1[4] = { ' a ', ' b ', ' c ', ' \0 ' };		// 文字列 "abc"
	char string2[] = "HelloWorld";							// 文字列 "HelloWorld"
	char string3[10];										// 最大10文字まで入る文字列
	
	// 文字列の入力
	printf("文字を入力してください：");
	scanf("%s", &string3);	// 文字列の入力
	printf("string1 = %s\n", string1);
	printf("string2 = %s\n", string2);
	printf("string3 = %s\n", string3);
	
	getchar();
}