#include "Play.h"

extern int CurrentLevel = 8;
extern int TargetLevel = 10;
bool isClear = false;

bool isFail = false;

void ShowTitle()
{
	printf("������ �������Դϴ�..................\n");
	printf("....................................\n");
	printf("...................................\n");

	printf("         ���� ��ȭ�ϱ�             \n\n");
}

void ShowManual()
{

	printf("-���� ���-\n");
	printf("Ű���� �Է� �� ���ͱ⸦ ������ �����Ѵ�.\n");
	printf("�Է� ���� �̿��� Ű�� �Է��� �ÿ� �缱���� �ؾ��մϴ�.\n\n");

	printf("-���� ��ǥ-\n");
	printf("���� 10�� �����\n\n");

	printf("-���� �÷��� ���-\n");
	printf("1. ���ѵ� ���������� ��ǥ�� �޼��ؾ� �մϴ�.\n");
	printf("2. Ư�� ���ⷹ������ ��ȭ �ϰ��� �����մϴ�.\n");
	printf("3. Ư�� �������� ���Ⱑ �ı� �˴ϴ�.\n\n");

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
