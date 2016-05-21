
// ハノイの塔

#include <stdio.h>

void Hanoi(int diskNumber, char *a, char *b, char *c)
{
	if (diskNumber >= 2)
	{
		Hanoi(diskNumber - 1, a, b, c);
	}

	printf("%d を %s から %s に移動\n", diskNumber, a, c);

	if (diskNumber >= 2)
	{
		Hanoi(diskNumber - 1, b, a, c);
	}
}


void main()
{

	Hanoi(4, "A", "B", "C");

	getchar();

}
