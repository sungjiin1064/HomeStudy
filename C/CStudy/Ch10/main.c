/*
* 2025-02-28
* �Լ��� ����
* 
* ��ȯ���� ������ void, ������ int
*/

#include <stdio.h>
#include <stdbool.h>

int currentMoney = 100;

bool IsMoneyEnough(int amount)
{
	//return currentMoney >= amount ? true : false;

	if (currentMoney >= amount) // ������ ����
	{
		printf("���� ����մϴ�\n");
	}
	else
	{
		printf("���� ����\n");
	}
}

void Example()
{
	//printf("���� ���\n");
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
	//printf("����� : %d\n", MultiplyNumber(5));

	IsMoneyEnough(50);
	/*{
		printf("���� ����մϴ�\n");
	}
	else if
	{
		printf("���� �����մϴ�.\n");
	}*/

}