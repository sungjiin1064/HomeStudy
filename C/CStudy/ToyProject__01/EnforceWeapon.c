#include "EnforceWeapon.h"

void ShowMenu()
{
	printf("1_ ��ȭ�Ѵ�.\n");
	printf("2_ ���� ���¸� Ȯ���Ѵ�.\n");

	int inputNumber = -1;
	scanf_s("%d", &inputNumber);
	while (getchar() != '\n');

	if (inputNumber == 1)
	{
		//printf("��ȭ�Ѵ�.\n");
		Upgrade();
	}
	else if (inputNumber == 2)
	{
		printf("���¸� Ȯ���Ѵ�.\n");
	}
	else
	{
		printf("�ش��ϴ� �Է°��� �������� �ʽ��ϴ�.\n");
		//printf("�ٽ� ���� �Է����ּ���.\n");
	}

	if (IsGameClear())
	{
		//printf("������ Ŭ�����߽��ϴ�.\n");
		isClear = true;
	}
	else
	{
		printf("��ǥ ������ �޼����� ���߽��ϴ�.\n");
	}

	printf("��� �����Ϸ��� �ƹ� ��ư�� �Է����ּ���.\n");
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
