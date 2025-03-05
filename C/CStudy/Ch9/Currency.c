#include "Currency.h"

bool IsEnoughMoney(int amount)
{
	return CurrentMoney >= amount ? true : false;
	
	/*if (CurrentMoney >= amount)
	{
		printf("돈이 충분합니다.\n");
	}
	else
	{
		printf("돈이 부족합니다.\n");
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
		printf("돈이 부족 합니다.\n");
		return false;
	}
}
