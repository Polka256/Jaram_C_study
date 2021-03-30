/*
리그오브레전드에 다양한 챔피언들은 각자 여러가지 속성과 스킬들을 가지고 있습니다.  대표적으로 이름, HP, 마나, Q,W,E,R 스킬이 있습니다.
당신의 챔피언은 티모입니다. 티모의 스킬명을 입력 받아서 스킬명의 글자수만큼 마나가 줄어드는 프로그램을 만드세요. 티모의 데이터는 주어집니다. 
예시) 
입력: 실명다트
출력: 마나 소모 (334->330)
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
        .name = "티모",
        .HP = 528,
        .MANA = 334,
        .Q_skill = "실명다트",
        .W_skill = "신속한이동",
        .E_skill = "맹독다트",
        .R_skill = "유독성함정"};
    
    //switch 문의 효율적인 사용을 위하여 입력값을 Q, W, E, R와 같이 알파벳 대문자로 고정했습니다. 
    char what_skill;
	scanf("%c", &what_skill);
	switch (what_skill)
	{	
	case 'Q':
		printf("마나 소모 (%d->%d)", teemo.MANA, (teemo.MANA-((strlen(teemo.Q_skill))/2)));
		break;
	case 'W':
		printf("마나 소모 (%d->%d)", teemo.MANA, (teemo.MANA-((strlen(teemo.W_skill))/2)));
		break;
	case 'E':
		printf("마나 소모 (%d->%d)", teemo.MANA, (teemo.MANA-((strlen(teemo.E_skill))/2)));
		break;
	case 'R':
		printf("마나 소모 (%d->%d)", teemo.MANA, (teemo.MANA-((strlen(teemo.R_skill))/2)));
		break;
	default:
		printf("티모의 스킬이 아닙니다.");
		break;
	}
}
