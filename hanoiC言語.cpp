
#include <stdio.h>


/*
	n c@ˆÚ“®‚³‚¹‚é‰~”Õ‚Ì–‡”
	from c@ˆÚ“®Œ³‚Ì–_‚Ì–¼‘O
	work c@ì‹Æ—p‚ÉŽg‚¤–_‚Ì–¼‘O
	dest c@ˆÚ“®æ‚Ì–_‚Ì–¼‘O

	‚±‚ÌŠÖ”‚ÌˆÓ–¡‚Íu‘æ‚Qˆø”‚©‚ç‘æ‚Sˆø”‚Ö‚Ž–‡‚Ì‰~”Õ‚ðˆÚ“®‚³‚¹‚ëv
*/
void Hanoi(int n, char *from, char *work, char *dest)
{
	if(n >= 2) Hanoi(n - 1, from, dest, work);

	printf("%d”Ô %s ‚©‚ç %s ‚Ö\n",n ,from, dest);

	if (n >= 2) Hanoi(n - 1, work, from, dest);

}


int main()
{
	Hanoi(3, "A", "B", "C");

	getchar();
	return 0;
}