
// �\����
// �����̃f�[�^�i�[�ꏊ

#include <stdio.h>

struct Character
{
	int hp = 5;
	int attack = 3;
};

// �L�����N�^�[�\���̂̕ϐ���錾
Character player;


void main()
{
	// �\���̂��A�N�Z�X����ɂ͕ϐ��̌�Ƀh�b�g��t����
	printf("hp : %d\n", player.hp);
	getchar();
}
