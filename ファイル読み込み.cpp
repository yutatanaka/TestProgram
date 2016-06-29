
#include <stdio.h>
#include <stdlib.h>


int main()
{
	FILE *fp;
	char *fileName = "pome.png";
	unsigned char buf[100];
	int i, size;
	fp = fopen(fileName, "rb");
	if (fp == NULL)
	{
		printf("%sファイルが開けません\n", fileName);
		return -1;
	}

	size = fread(buf, sizeof(unsigned char), 100, fp);

	for (i = 0; i < size; i++)
	{
		if (i % 16 == 0) printf("\n");
		printf("%02X", buf[i]);
	}

	fclose(fp);


	return 0;
}