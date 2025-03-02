#include "Currency.h"

bool IsEnoughMoney(int amount)
{
	//return //CurrentMoney >= amount ? true : false;
	
	if (CurrentMoney >= amount)
	{
		printf("돈이 충분합니다.\n");
	}
	else
	{
		printf("돈이 부족합니다.\n");
	}


}
