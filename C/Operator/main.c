/*
작성일 : 2025-02-19
작성자 : 박성진
주  제 : 

*/

/*
사칙 연산 : +, -, *, %

단항 연산자
부호 : +, -  음수 -10    양수 +10

이항 연산자
num1 + num2

삼항 연산자
? 1항  = 2항   : 3항
*/

/*
연산자의 쓰임새
산술 연산자 +, -, *, /, %
비교 연산자 > , < , ==    == 반대 !=
비트 연산자 (data type)
관계 연산자 ( or ||   , and && )
*/

/*
비교 연산자 결과 : 참(true) 1, 거짓(false) 0
1, 0 : 1 + 0 = 1;
*/

#include <stdio.h>
#include <stdbool.h>

int main()
{

	// 사칙 연산 + 나머지

	printf("연산자 실습 1\n");

	// 변수의 선언 초기화

	int num1 = 10;
	int num2 = 3;

	//덧셈
	printf(" %d + %d = %d\n", num1, num2, num1 + num2);
	//뺄셈
	printf(" %d - %d = %d\n", num1, num2, num1 - num2);
	//곱셈
	printf(" %d * %d = %d\n", num1, num2, num1 * num2);
	//나눗셈
	printf(" %d / %d = %d\n", num1, num2, num1 / num2);
	//나머지
	printf(" %d 나머지 %d = %d\n", num1, num2, num1 % num2);

	printf("연산자 실습 2 \n");

	printf("비교결과 num1 > num2 : %d\n", num1 > num2); // 참
	printf("비교결과 num1 < num2 : %d\n", num1 < num2); // 거짓

	printf("연산자 실습 3\n");
	bool isTrue = true;
	bool isFalse = false;

	int result1 = num1 > num2;

	printf("삼항 연산자 결과 출력 : %s\n", result1 ? "true" : "false");
	printf("삼항 연산자 결과 출력 : %d\n", result1 ? 1 : 0);

	printf("연산자 실습 4 : 관계 연산자 \n");

	printf("관계 연산자 : %d \n", (num1 != num2) || (num1 < num2));
	printf("관계 연산자 : %d \n", (num1 != num2) && (num1 > num2));

	printf("실습 5 : 복합 연산자 \n");

	int num3 = 2;
	int num4 = 5;
	//num3 = num3 + num4;
	//num3 += num4; //위에랑 동일
	//printf("num3 + num4의 값 : %d", num3);

	printf("num3의 값 : %d\n", num3);//2
	printf("num3의 값 : %d\n", num3++);//2
	printf("num4의 값 : %d\n", num4);//5
	printf("num4의 값 : %d\n", ++num4);//6
	printf("num3의 값 : %d\n", ++num3);//4
	

	printf("\n");
	printf("게임스토리\n");

	// 무기강화 n강일떄 무기 n+1무기 출력
	printf("%+0s를 강화하여 %+d이 되었습니다.\n", "롱소드", 1);
	//아이템 Inventory, Slot, 기타아이템수집, Stack * 갯수
	//Slot 최대갯수 : 변수 
	//Stack 최대갯수 : 변수
	// A 아이템 n개 획득, B 아이템 m개 획득
	// 현재 인벤토리의 갯수가 가득찼는지 안찼는지 표현하는 결과를 표현


	//int Slot = 10;
	//int result1 = Slot











	
	




}