
// —”‚ğg‚Á‚½ƒvƒƒOƒ‰ƒ€

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void main()
{
	int a, b;

	srand((unsigned)time(NULL));
	// 1‚©‚ç10‚Ü‚Å‚Ì—”‚ğ”­¶‚³‚¹‚é
	a = rand() % 10 + 1;
	b = rand() % 10 + 1;

	printf("%d + %d = %d\n", a, b, a + b);

	getchar();
}