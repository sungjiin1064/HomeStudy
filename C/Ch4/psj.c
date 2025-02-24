#include <stdio.h>


int main()
{
	printf("몬스터 피0만들기\n");

	int A = 10;
	int mHP = 40;
	
	printf("몬스터를 공격하여 %d만큼 데미지를줌\n", A);
	printf("몬스터의 피가 %d만큼 남음\n", (mHP - A * 1) < 0 ? 0 : (mHP - A * 1));
	printf("몬스터를 공격하여 %d만큼 데미지를줌\n", A);
	printf("몬스터의 피가 %d만큼 남음\n", (mHP - A * 2) < 0 ? 0 : (mHP - A * 2));
	printf("몬스터를 공격하여 %d만큼 데미지를줌\n", A);
	printf("몬스터의 피가 %d만큼 남음\n", (mHP - A * 3) < 0 ? 0 : (mHP - A * 3));
	printf("몬스터를 공격하여 %d만큼 데미지를줌\n", A);
	printf("몬스터의 피가 %d만큼 남음\n", (mHP - A * 4) < 0 ? 0 : (mHP - A * 4));
	printf("몬스터를 공격하여 %d만큼 데미지를줌\n", A);
	printf("몬스터의 피가 %d만큼 남음\n", (mHP - A * 5) < 0 ? 0 : (mHP - A * 5));
	

}

