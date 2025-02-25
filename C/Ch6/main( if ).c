/*
작성일 : 2025-02-24
작성자 : 박성진
주  제 : 코드의 흐름, 제어
*/

/*
main 함수는 프로그램의 시작점.
위에서 부터 순서대로 코드가 실행된다.
main함수의 마지막 중괄호를 만나면 프로그램이 종료된다.
*/

/*
* 디버깅 : 프로그램을 중단시켜서 코드를 확인하는 기능
* f9눌러서 중단점을 생성 또는 삭제할 수 있다.
*/

/*
* 조건문, 분기, branch
* 
* if문법
* if(){}
* () : 조건
* {} : 몸체, body
* 
* 주의할 점
* if();{}
* - 조건문과 상관없이 코드가 실행된다.
*/

/*
* if(조건1)
*  짝수 : n % 2 == 0
*  홀수 : n % 2 == 1
* 
* else // 나머지 모든 것들
*/

/*
* 점수를 기준으로 일정 점수 이상이면"N"등급을 매기는 시스템을 만든다.
* 점수 >= 100 : S등급이다.
* 점수 >= 90  : A등급이다.
* 점수 <  90  : F등급이다.
*/

#include <stdio.h>
#include <stdlib.h> // srand, rand를 사용하기 위한 헤더파일
#include <time.h> // time을 사용하기 위한 헤더파일

int main()
{
	printf("조건문 예제1\n");

	// int : 정수를 저장하고 싶다 + 4바이트 크기

	int count =15;

	// 관계 연산자, 비교 연산자
	// 5 10
	// if ~ else 문
	if (count > 10) // true, flase
	{
		printf("count값이 10보다 작습니다.\n");
	}
	else
	{
		printf("count값이 10보다 큽니다.\n");
	}
	
	// if ~ else if else
	printf("예제 문제1\n");
	int score = 89;
	if (score >= 100)
	{
		printf("S등급, 현제 점수 %d\n", score);
	}
	else if (score >= 90)
	{
		printf("A등급, 현제 점수 %d\n", score);
	}
	else
	{
		printf("F등급, 현제 점수 %d\n", score);
	}

	// 숫자 게임
	// 랜덤한 숫자
	// 구글 C언어 랜덤숫자 가져오는 방법 Random.
	// 조건문 확인.
	// ??? 내가 입력한 숫자 비교 크면 -> 큽니다.

	// 숫자가 있다.
	// 조건문으로 비교해서 숫자가 큰지 작은지 출력한다.

	// seed값
	// 랜덤 값 120327402139423040148901 % 99 : 0 ~ 98   나올려고하는 숫자맥스 + 1

	printf("랜덤 숫자 맞추기게임\n");
	printf("숫자 범위 0 ~ 100\n");
	srand(time(NULL));           

	int randomNumber = rand() % 101;

	printf("결과값 %d\n", randomNumber);

	int userValue = 0;

	//scanf_s("%d", &userValue);
	
	//printf("유저의 값 %d\n", userValue);
	if (userValue > randomNumber)
	{
		printf("목표 값 보다 큽니다.\n");
	}
	else if (userValue < randomNumber)
	{
		printf("목표 값 보다 작습니다.\n");
	}
	else
	{
		printf("정답입니다.\n");
	}






	



}
