#include "Currency.h"

bool IsEnoughMoney(int amount)
{
	return CurrentMoney >= amount ? true : false;
	
	/*if (CurrentMoney >= amount)
	{
		printf("���� ����մϴ�.\n");
	}
	else
	{
		printf("���� �����մϴ�.\n");
	}*/


}

bool UseMoney(int price)
{
	if (IsEnoughMoney(price))
	{
		CurrentMoney = CurrentMoney - price;
		ShowInfo();

		return true;
	}
	else
	{
		printf("���� ���� �մϴ�.\n");
		return false;
	}
}
