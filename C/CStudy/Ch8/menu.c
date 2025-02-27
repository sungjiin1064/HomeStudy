/*
* menu.h 에서 함수이름(SelectMenu)에 마우스 우클릭 빠른작업 및 리팩터링...클릭(ctrl + .)
* menu.h 코드를 ctrl + v 한거랑 같음
*/

#include "menu.h"
#pragma once

int attackPower = 0;
int weaponLevel = 1;
int baseattack = 10;
int weight = 5;

void SelectMenu()
{
	while (true)
	{
		//system("cls");
		printf("1_강화한다.\n");
		printf("2_취소한다.\n");
		printf("3_종료한다.\n");

		int inputNumber = -1;
		scanf_s("%d", &inputNumber);
		while (getchar() != '\n'); // character 입력 버퍼

		if (inputNumber == 1)
		{
			printf("강화를 진행합니다.\n");

			// 무기의 레벨
			// 무기의 기본 공격력
			// 가중치
			// 현제 공격력

			// 강화를 무조건 성공하는 case

			//무기의 레벨을 1상승 시킵니다.
			weaponLevel = weaponLevel + 1;
			printf("무기레벨 %d\n", weaponLevel);
			//현제 공격력 = 기본 공격력 + 레벨 * 가중치
			attackPower = baseattack + weaponLevel * weight;
			//printf(현제 공격력, 레벨)
			printf("현제 공격력 %d, 레벨 %d\n", attackPower, weaponLevel);

		}
		else if (inputNumber == 2)
		{
			printf("강화를 취소합니다.\n");
		}
		else if (inputNumber == 3)
		{
			printf("프로그램을 종료합니다.\n");
			break;
		}
		else
		{
			printf("잘못된 값을 입력했습니다.\n");
		}

		//플레이어가 특정 키를 입력했을 때 넘어가도록 하고 싶다.

		printf("진행을 하려면 아무 키를 입력해주세요.\n");
		_getch(); // 입력값을 받아오는 명령어

	}
}
