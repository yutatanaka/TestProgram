
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
		Hanoi(diskNumber - 1, b, c, a);
		
	}
	printf("%d ‚ð %s ‚©‚ç %s ‚ÉˆÚ“®\n", diskNumber, c, b);

	
}


void main()
{

	Hanoi(3, "A", "B", "C");

	getchar();

}
