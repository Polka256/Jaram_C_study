/*
���׿��극���忡 �پ��� è�Ǿ���� ���� �������� �Ӽ��� ��ų���� ������ �ֽ��ϴ�.  ��ǥ������ �̸�, HP, ����, Q,W,E,R ��ų�� �ֽ��ϴ�.
����� è�Ǿ��� Ƽ���Դϴ�. Ƽ���� ��ų���� �Է� �޾Ƽ� ��ų���� ���ڼ���ŭ ������ �پ��� ���α׷��� ���弼��. Ƽ���� �����ʹ� �־����ϴ�. 
����) 
�Է�: �Ǹ��Ʈ
���: ���� �Ҹ� (334->330)
*/
#include <stdio.h>

typedef struct _champ
{
    char name[20];
    int HP;
    int MANA;
    char Q_skill[20];
    char W_skill[20];
    char E_skill[20];
    char R_skill[20];
} champ;

int main()
{

    champ teemo = {
        .name = "Ƽ��",
        .HP = 528,
        .MANA = 334,
        .Q_skill = "�Ǹ��Ʈ",
        .W_skill = "�ż����̵�",
        .E_skill = "�͵���Ʈ",
        .R_skill = "����������"};
    
    //switch ���� ȿ������ ����� ���Ͽ� �Է°��� Q, W, E, R�� ���� ���ĺ� �빮�ڷ� �����߽��ϴ�. 
    char what_skill;
	scanf("%c", &what_skill);
	switch (what_skill)
	{	
	case 'Q':
		printf("���� �Ҹ� (%d->%d)", teemo.MANA, (teemo.MANA-((strlen(teemo.Q_skill))/2)));
		break;
	case 'W':
		printf("���� �Ҹ� (%d->%d)", teemo.MANA, (teemo.MANA-((strlen(teemo.W_skill))/2)));
		break;
	case 'E':
		printf("���� �Ҹ� (%d->%d)", teemo.MANA, (teemo.MANA-((strlen(teemo.E_skill))/2)));
		break;
	case 'R':
		printf("���� �Ҹ� (%d->%d)", teemo.MANA, (teemo.MANA-((strlen(teemo.R_skill))/2)));
		break;
	default:
		printf("Ƽ���� ��ų�� �ƴմϴ�.");
		break;
	}
}
