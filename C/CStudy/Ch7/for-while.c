/*
* 주 제 : 코드의 흐름 제어 - 반복문
* - for 반복문, while 반복문
*/

/*
* 반복문
* - 1+1+1+1+1 => 1 * 5
* 
* for, while
* 
* for(int i = 0; i < 10 ; i++)  i+=2는 2씩 
  가운데 조건에는 참(true), 거짓(false)   조건이 참일때만 반복문 실행, 거짓일 때는 반복문을 벗어난다.
* 
* 
*/


#include <stdio.h>

int main()
{
	printf("반복문 예제1\n");
	// A이름의 아이템을 획득 - 갯수
	int Acount = 0;
	printf("A아이템의 수 : %d\n", Acount);

	//아이템 1개 획득했다.
	for (int i = 0; i < 10; i++)
	{
		Acount = Acount + 1;
	}

	printf("A아이템의 수 : %d\n", Acount);

	printf("for 반복문 예제2\n");

	int BCount = 0;

	for (int i = 0; i < 10 ; i++)
	{
		BCount = BCount + i;
	}

	printf("B아이템의 수 : %d\n", BCount);

	printf("for 반복문 예제3\n");

	for (int reverseI = 10; reverseI > 0; reverseI--)
	{
		printf("현제 I의 값 : %d\n", reverseI);
	}

	//게임의 이야기를 입혀서 표현하기

	for (;;)
	{
		// 1.무기의 Stet을 표현해주는 단계
		// 무기의 이름
		printf("무기의 이름 : %s\n", "롱소드");
		// 무기의 레벨
		int weaponLevel = 0;
		// 기본공격력, 가중치
		int basePower = 10;
		int weight = 5;
		// 무기의 공격력 = 기본 공격력 + 레벨 * 가중치
		int attackPower = basePower + weaponLevel + weight;
		// 강화를 계속 진행할 것인가? 그만둘것인가
		// 2.강화를 선택하는 단계 
		printf("강화를 진행하시겠습니까?(Y/N)\n");
		char check = ' ';
		scanf_s("%c", &check, 1);

		if (check == 'Y')
		{
			printf("강화를 진행합니다.\n");
		}
		else if (check == 'N')
		{
			printf("강화를 그만 두겠습니다.\n");
		}
		else
		{
			printf("잘못된 값을 입력하였습니다.\n");

			char another = ' ';
			scanf_s("%c", &another, 1);
			while (getchar() != '\n');
			if (another == 'Y')
			{
				printf("강화를 진행합니다.\n");
			}
			else if (another == 'N')
			{
				printf("강화를 그만 두겠습니다.\n");
			}
			else
			{
				printf("프로그램이 종료되었습니다.\n");

			}
		}

		break;


	}

}