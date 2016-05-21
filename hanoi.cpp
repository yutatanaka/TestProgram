
// ƒnƒmƒC‚Ì“ƒ

#include <stdio.h>

void Hanoi(int diskNumber, char *a, char *b, char *c)
{
	if (diskNumber >= 2)
	{
		Hanoi(diskNumber - 1, a, b, c);
	}

	printf("%d ‚ð %s ‚©‚ç %s ‚ÉˆÚ“®\n", diskNumber, a, c);

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
