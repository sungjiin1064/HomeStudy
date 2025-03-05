/*
* 2025-02-27
* 지역 변수, 전역 변수
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
	printf("케릭터 클래스 : %s\n", "모험가");
	printf("내가 가지 돈 : %d\n", CurrentMoney);

	WaitInputAnyKey();
}
void WaitInputAnyKey()
{
	printf("창을 닫으려면 아무 키를 입력해주세요.\n");
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