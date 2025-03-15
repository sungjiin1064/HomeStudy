#include "EnforceWeapon.h"

void ShowMenu()
{
	printf("1_ 강화한다.\n");
	printf("2_ 현재 상태를 확인한다.\n");

	int inputNumber = -1;
	scanf_s("%d", &inputNumber);
	while (getchar() != '\n');

	if (inputNumber == 1)
	{
		//printf("강화한다.\n");
		Upgrade();
	}
	else if (inputNumber == 2)
	{
		printf("상태를 확인한다.\n");
	}
	else
	{
		printf("해당하는 입력값이 존재하지 않습니다.\n");
		//printf("다시 값을 입력해주세요.\n");
	}

	if (IsGameClear())
	{
		//printf("게임을 클리어했습니다.\n");
		isClear = true;
	}
	else
	{
		printf("목표 레벨을 달성하지 못했습니다.\n");
	}

	printf("계속 진행하려면 아무 버튼을 입력해주세요.\n");
	_getch();
	system("cls");
}

void Upgrade()
{
	CurrentLevel++;
}

void ShowStatus()
{
}

bool IsGameClear()
{
	return CurrentLevel == TargetLevel ? true : false;
	
}
