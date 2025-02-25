//#include <stdio.h>
//
//
//int main()
//{
//	printf("몬스터 피0만들기\n");
//
//	int A = 10;
//	int mHP = 40;
//	
//	printf("몬스터를 공격하여 %d만큼 데미지를줌\n", A);
//	printf("몬스터의 피가 %d만큼 남음\n", (mHP - A * 1) < 0 ? 0 : (mHP - A * 1));
//	printf("몬스터를 공격하여 %d만큼 데미지를줌\n", A);
//	printf("몬스터의 피가 %d만큼 남음\n", (mHP - A * 2) < 0 ? 0 : (mHP - A * 2));
//	printf("몬스터를 공격하여 %d만큼 데미지를줌\n", A);
//	printf("몬스터의 피가 %d만큼 남음\n", (mHP - A * 3) < 0 ? 0 : (mHP - A * 3));
//	printf("몬스터를 공격하여 %d만큼 데미지를줌\n", A);
//	printf("몬스터의 피가 %d만큼 남음\n", (mHP - A * 4) < 0 ? 0 : (mHP - A * 4));
//	printf("몬스터를 공격하여 %d만큼 데미지를줌\n", A);
//	printf("몬스터의 피가 %d만큼 남음\n", (mHP - A * 5) < 0 ? 0 : (mHP - A * 5));

//}


#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
	srand(time(NULL));

	int random = rand() % 101;

	printf("랜덤숫자 %d\n", random);

	int user = 0;

	printf("당시의 선택은?  ");
	scanf_s("%d", &user);

	if (user > random)
	{
		printf("선택한 숫자보다 작습니다\n");
	}
	else if (user < random)
	{
		printf("선택한 숫자보다 큽니다\n");
	}
	else
	{
		printf("정답입니다!!\n");
	}







}





