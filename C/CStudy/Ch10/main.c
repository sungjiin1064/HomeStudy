/*
* 2025-02-28
* 함수의 사용법
* 
* 반환값이 없으면 void, 있으면 int
*/

#include <stdio.h>
#include <stdbool.h>

int currentMoney = 100;

bool IsMoneyEnough(int amount)
{
	//return currentMoney >= amount ? true : false;

	if (currentMoney >= amount) // 위에랑 같음
	{
		printf("돈이 충분합니다\n");
	}
	else
	{
		printf("돈이 부족\n");
	}
}

void Example()
{
	//printf("예시 출력\n");
}

int MultiplyNumber(int input)
{
	int a = 10;
	return 10 * input;
}

int main()
{
	Example();
	MultiplyNumber(5);
	//printf("결과값 : %d\n", MultiplyNumber(5));

	IsMoneyEnough(50);
	/*{
		printf("돈이 충분합니다\n");
	}
	else if
	{
		printf("돈이 부족합니다.\n");
	}*/

}