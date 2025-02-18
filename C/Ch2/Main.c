#include <stdio.h>

int main()
{
	int attackPower;          //%d 사용

	//무기 공격력 공식 : attackPower = 기본공격력 + 무기레벨 + 성장계수
	int basicPower = 10;
	int weaponLevel = 0;
	int growthPower = 3;

	attackPower = basicPower + weaponLevel * growthPower;
	//attackPower = 10;
	//float _attackfloatPower;       //%f 사용
	//_attackfloatPower = 10.5;

	//printf("강화 후에 무기의 공격력이 %f이 되었습니다", _attackfloatPower);

	printf("무기의 이름 : %s, 무기의 레벨 : %d, 무기 성공 확률 : %f\n", "롱소드", weaponLevel, 0.8);     // %뒤에이름이면 s, 숫자이면 d인듯
	printf("강화가 성공하였습니다. 무기의 공격력이 증가하였습니다.\n");
	printf("강화 후에 무기의 공격력이 %d이 되었습니다\n", attackPower);

	printf("\n");

	printf("예제 문제 1 : 사각형의 넓이를 구하시오\n");

	int width, height, extent;
	//width = 3;
	//height = 5;
	//extent = width * height;
    
	printf("가로의 길이를 입력해주세요.\n");
	scanf_s("%d", &width);
	printf("세로의 길이를 입력해주세요.\n");
	scanf_s("%d", &height);

	extent = width * height;
	printf("사각형의 넓이는 %d입니다.\n", extent);














}