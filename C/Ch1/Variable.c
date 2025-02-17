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

	int playerAttackPower = 8;
	int enemyAttackPower = 3;
	int playerStamina = 100;
	int enemyStamina = 50;
	int pH = playerStamina - enemyAttackPower;
	int eH = enemyStamina - playerAttackPower;
	int mH = eH - playerAttackPower;

	printf("%s가 숲을 지나가다 %s을 만났습니다.\n", "슬레이어", "슬라임");
	//printf("-전투시작-\n");
	//printf("%s 체력(%d)   %s 체력(%d)\n", "슬레이어", playerStamina, "슬라임", enemyStamina);
	//printf("%s가 선공을 날려 %d 만큼 데미지를 주었습니다.\n", "슬레이어", playerAttackPower);
	//printf("%s의 체력이 %d만큼 남았습니다.\n", "슬라임", eH);
	//printf("%s와 %s이 서로 공격하여 %d과 %d의 데미지를 주었습니다.\n", "슬레이어", "슬라임", playerAttackPower, enemyAttackPower);
	//printf("%s의 체력이 %d, %s의 체력이 %d만큼 남았습니다.\n","슬레이어", pH, "슬라임", mH);
	//printf("%s와 %s가 서로 공격하여 %d과 %d의 데미지를 주었습니다.\n", "슬레이어", "슬라임", playerAttackPower, enemyAttackPower);
	//printf("%s의 체력이 %d, %s의 체력이 %d만큼 남았습니다.\n", "슬레이어", pH, "슬라임", mH);


}
// F5, 디버깅 버튼 클릭
// 콘솔 창에 "안녕 변수" 출력시켜보겠습니다.


// 1. 출력하고 싶은 내용을 작성했다.
// 2. 단어, 정수, 실수, 문자열 출력하세요.

