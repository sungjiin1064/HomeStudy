#include "Play.h"

extern int CurrentLevel = 8;
extern int TargetLevel = 10;
bool isClear = false;

bool isFail = false;

void ShowTitle()
{
	printf("게임이 실행중입니다..................\n");
	printf("....................................\n");
	printf("...................................\n");

	printf("         무기 강화하기             \n\n");
}

void ShowManual()
{

	printf("-조작 방법-\n");
	printf("키보드 입력 및 엔터기를 눌러서 선택한다.\n");
	printf("입력 조건 이외의 키를 입력할 시에 재선택을 해야합니다.\n\n");

	printf("-게임 목표-\n");
	printf("무기 10강 만들기\n\n");

	printf("-게임 플레이 요소-\n");
	printf("1. 제한된 소지금으로 목표를 달성해야 합니다.\n");
	printf("2. 특정 무기레벨에서 강화 하강이 존재합니다.\n");
	printf("3. 특정 레벨에서 무기가 파괴 됩니다.\n\n");

}

void GameLogic()
{
	while (1)
	{
		ShowMenu();

		if (isClear || isFail)
		{
			break;
		}
		if (isClear)
		{
			printf("Game Clear!\n");
		}
		if (isFail)
		{
			printf("Game Over!\n");

		}
	}
}

void GameLoop()
{
	ShowTitle();
	ShowManual();
	GameLogic();
}
