/*
작성일 : 2025-02-17
작성자 : 박성진
주  제 : 변수
*/

// 0 환경 설정
#include <stdio.h>

int main()
{
    // player: 닉네임(문자열) - kk, oo
	// enemy : 몬스터 이름(문자열)
	// player's attackpower : 플레이어의 공격력(숫자)
	// enemy's attackpower  : 몬스터의 공격력 (숫자)

	// 변수를 이용해서 - 한방에 player이름을 바꾸어 보자.
	// 컴퓨터에게 전달해아 할 정보(변수의 이름, 어떠한 종류인가(★★★), 값)

	int playerAttackPower = 6;
	int monsterAttackPower = 2;
	int playerHealth = 50;
	int monsterHealth = 10;
	int pH = playerHealth - monsterAttackPower;
	int mH = monsterHealth - playerAttackPower;
	int mH1 = mH - playerAttackPower;
	int mH2 = mH1 - playerAttackPower;
	int pH1 = pH - monsterAttackPower;
	
	printf("%s가 숲을 지나가다 %s을 만났습니다.\n", "슬레이어", "슬라임");
	printf("\n");
	printf("-전투시작-\n");
	printf("\n");
	printf("%s 체력(%d)   %s 체력(%d)\n", "슬레이어", playerHealth, "슬라임", monsterHealth);
	printf("%s가 선공을 날려 %d 데미지를 주었습니다.\n", "슬레이어", playerAttackPower);
	printf("%s의 체력이 %d 남았습니다.\n", "슬라임", mH);
	//printf("%s와 %s이 서로 공격하여 %d과 %d의 데미지를 주었습니다.\n", "슬레이어", "슬라임", playerAttackPower, monsterAttackPower);
	//printf("%s의 체력이 %d, %s의 체력이 %d이되었습니다.\n","슬레이어", pH, "슬라임", mH1);
	printf("%s이 공격하여 %d 데미지를 주었습니다.\n", "슬라임", monsterAttackPower);
	printf("%s의 체력이 %d 남았습니다.\n", "슬레이어", pH);
	printf("%s가 공격하여 %d 데미지를 주었습니다.\n", "슬레이어", playerAttackPower);
	printf("%s의 체력이 %d 남았습니다.\n", "슬라임", mH1);
		// 위에 마이너스가 안뜨고 0이뜨게. (0이되면 사망이라는 문구가 뜨게도 할수가 있나요)
	printf("몬스터가 전리품을 떨구었습니다.\n");
	printf("전리품을 획득하시겠습니까? y or n\n");

	int y, n;

	//scanf_s("%d", &y);  // n눌리면 전리품 미획득하게 할 수 있나요?

	printf("(단도)*1 (무기강화석)*1 을 획득하였습니다.\n");
	printf("\n");
	printf("-전투종료-\n");
	printf("\n");
	printf("강화석을 획득하였습니다. 강화를 하시겠습니까? y or n\n");
	
	//scanf_s("%d", &y);  // 한번더 안되나요?

	int attackPower;          

	int basicPower = 10;
	int weaponLevel = 0;
	int growthPower = 3;

	attackPower = basicPower + weaponLevel * growthPower;


	printf("무기의 이름 : %s, 무기의 레벨 : %d, 무기 성공 확률 : %f\n", "롱소드", weaponLevel, 100.0);  
	printf("강화가 성공하였습니다. 무기의 공격력이 증가하였습니다.\n");
	printf("강화 후에 무기의 공격력이 %d이 되었습니다\n", attackPower);



	










}
// <아이템>
// 무기
// 방패
// 투구
// 갑옷
// 어깨
// 장갑
// 신발
// 허리띠
// 목걸이
// 반지
// 
// 
// 
//
//
//
//
//
//
//
//
//
//
//
//
//
