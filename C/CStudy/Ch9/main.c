/*
* 2025-02-27
* ���� ����, ���� ����
*/

/*
* Call by value  vs  Call by reference
*/

#include "lecture.h"
#include "Upgrade.h"
#include "main.h"
#include "Currency.h"

int number = 1; 

int CurrentMoney = 1000;
void ShowInfo()
{
	printf("�ɸ��� Ŭ���� : %s\n", "���谡");
	printf("���� ���� �� : %d\n", CurrentMoney);

	WaitInputAnyKey();
}
void WaitInputAnyKey()
{
	printf("â�� �������� �ƹ� Ű�� �Է����ּ���.\n");
	_getch();
}
int main()
{
	ShowInfo();
	system("cls");

	

	IsEnoughMoney(500);

	//ShowExample();
	ShowUpgradeMenu();
}